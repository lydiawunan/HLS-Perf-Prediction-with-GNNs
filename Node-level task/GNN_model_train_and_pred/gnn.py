
#
# -----------------------ATTENTION----------------------------------------------------------------
# 1. To use the evaluator defined by OGB, you have to find file master.csv under dir:
# $your python$/site-packages/ogb/nodeproppred/master.csv, and add our dataset information (since our
# dataset are not official OGB datasetyet.) We provide the master.csv of our own you can just replace
# the original one.
#
# 2. To use the metrics rocauc, you have to change the tasknum in master.csv from 3 to 1.
#


import argparse
from copy import copy
import torch
from torch._C import device
import torch.nn.functional as F
from torch_sparse import SparseTensor
from torch.nn import ModuleList, Linear, ParameterDict, Parameter
import torch_geometric.transforms as T
from torch_geometric.nn import GCNConv, SAGEConv, GINConv, RGCNConv

from ogb.nodeproppred import PygNodePropPredDataset, Evaluator

from logger import Logger
import numpy as np


class GCN(torch.nn.Module):
    def __init__(self, in_channels, hidden_channels, out_channels, num_layers,
                 dropout, if_auc):
        super(GCN, self).__init__()
        self.if_auc = if_auc
        self.convs = torch.nn.ModuleList()
        self.convs.append(
            GCNConv(in_channels, hidden_channels, normalize=False))
        for _ in range(num_layers - 2):
            self.convs.append(
                GCNConv(hidden_channels, hidden_channels, normalize=False))
        self.convs.append(
            GCNConv(hidden_channels, out_channels, normalize=False))

        self.dropout = dropout

    def reset_parameters(self):
        for conv in self.convs:
            conv.reset_parameters()

    def forward(self, x, adj_t):
        for conv in self.convs[:-1]:
            x = conv(x, adj_t)
            x = F.relu(x)
            x = F.dropout(x, p=self.dropout, training=self.training)
        x = self.convs[-1](x, adj_t)
        if self.if_auc:
            return x
        else:
            return x.log_softmax(dim=-1)


class SAGE(torch.nn.Module):
    def __init__(self, in_channels, hidden_channels, out_channels, num_layers,
                 dropout, if_auc):
        super(SAGE, self).__init__()
        self.if_auc = if_auc
        self.convs = torch.nn.ModuleList()
        self.convs.append(SAGEConv(in_channels, hidden_channels))
        for _ in range(num_layers - 2):
            self.convs.append(SAGEConv(hidden_channels, hidden_channels))
        self.convs.append(SAGEConv(hidden_channels, out_channels))

        self.dropout = dropout

    def reset_parameters(self):
        for conv in self.convs:
            conv.reset_parameters()

    def forward(self, x, adj_t):
        for conv in self.convs[:-1]:
            x = conv(x, adj_t)
            x = F.relu(x)
            x = F.dropout(x, p=self.dropout, training=self.training)
        x = self.convs[-1](x, adj_t)
        if self.if_auc:
            return x
        else:
            return x.log_softmax(dim=-1)


class GIN(torch.nn.Module):
    def __init__(self, in_channels, hidden_channels, out_channels, num_layers,
                 dropout, if_auc):
        super(GIN, self).__init__()
        self.if_auc = if_auc
        self.firstmlp = torch.nn.Sequential(torch.nn.Linear(
            in_channels, hidden_channels), torch.nn.BatchNorm1d(hidden_channels), torch.nn.ReLU())
        self.mlp = torch.nn.Sequential(torch.nn.Linear(
            hidden_channels, hidden_channels), torch.nn.BatchNorm1d(hidden_channels), torch.nn.ReLU())
        self.lastmlp = torch.nn.Sequential(torch.nn.Linear(hidden_channels, hidden_channels), torch.nn.BatchNorm1d(
            hidden_channels), torch.nn.ReLU(), torch.nn.Linear(hidden_channels, out_channels))
        self.convs = torch.nn.ModuleList()
        self.convs.append(
            GINConv(self.firstmlp))
        for _ in range(num_layers - 2):
            self.convs.append(
                GINConv(self.mlp))
        self.convs.append(
            GINConv(self.lastmlp))

        self.dropout = dropout

    def reset_parameters(self):
        for conv in self.convs:
            conv.reset_parameters()

    def forward(self, x, adj_t):
        for conv in self.convs[:-1]:
            x = conv(x, adj_t)
            x = F.relu(x)
            x = F.dropout(x, p=self.dropout, training=self.training)
        x = self.convs[-1](x, adj_t)
        if self.if_auc:
            return x
        else:
            return x.log_softmax(dim=-1)


class RGCN(torch.nn.Module):
    def __init__(self, in_channels, hidden_channels, out_channels, num_layers,
                 dropout, if_auc):
        super(RGCN, self).__init__()
        self.if_auc = if_auc
        self.in_channels = in_channels
        self.out_channels = out_channels
        self.num_node_types = 8

        self.root_lins = ModuleList([
            Linear(in_channels, out_channels, bias=True)
            for _ in range(self.num_node_types)
        ])
        self.convs = torch.nn.ModuleList()
        self.convs.append(
            RGCNConv(in_channels, hidden_channels, self.num_node_types))
        for _ in range(num_layers - 2):
            self.convs.append(
                RGCNConv(hidden_channels, hidden_channels, self.num_node_types))
        self.convs.append(
            RGCNConv(hidden_channels, out_channels, self.num_node_types))

        self.dropout = dropout

    def reset_parameters(self):
        for conv in self.convs:
            conv.reset_parameters()

    def forward(self, x, adj_t):
        for conv in self.convs[:-1]:
            x = conv(x, adj_t)
            x = F.relu(x)
            x = F.dropout(x, p=self.dropout, training=self.training)
        x = self.convs[-1](x, adj_t)
        if self.if_auc:
            return x
        else:
            return x.log_softmax(dim=-1)


def train(model, data, train_idx, optimizer, if_auc):
    model.train()
    criterion = torch.nn.BCEWithLogitsLoss()
    optimizer.zero_grad()
    out = model(data.x, data.adj_t)[train_idx]
    if if_auc:
        loss = criterion(out, data.y[train_idx].to(torch.float))
    else:
        loss = F.nll_loss(out, data.y.squeeze(1)[train_idx])
    loss.backward()
    optimizer.step()

    return loss.item()


@torch.no_grad()
def test(model, data, split_idx, evaluator, if_auc=True):
    model.eval()
    y_pred = model(data.x, data.adj_t)
    if if_auc:
        train = evaluator.eval({
            'y_true': data.y[split_idx['train']],
            'y_pred': y_pred[split_idx['train']],
        })['rocauc']
        valid = evaluator.eval({
            'y_true': data.y[split_idx['valid']],
            'y_pred': y_pred[split_idx['valid']],
        })['rocauc']
        test = evaluator.eval({
            'y_true': data.y[split_idx['test']],
            'y_pred': y_pred[split_idx['test']],
        })['rocauc']
    else:
        y_pred = y_pred.argmax(dim=-1, keepdim=True)

        train = evaluator.eval({
            'y_true': data.y[split_idx['train']],
            'y_pred': y_pred[split_idx['train']],
        })['acc']
        valid = evaluator.eval({
            'y_true': data.y[split_idx['valid']],
            'y_pred': y_pred[split_idx['valid']],
        })['acc']
        test = evaluator.eval({
            'y_true': data.y[split_idx['test']],
            'y_pred': y_pred[split_idx['test']],
        })['acc']

    return train, valid, test


@torch.no_grad()
def realcase_test(model, data, split_idx, evaluator, mod_name, if_auc=True):
    model.eval()

    y_pred = model(data.x, data.adj_t)
    # y_pred = y_pred.argmax(dim=-1, keepdim=True)
    if if_auc:
        realcase = evaluator.eval({
            'y_true': data.y[split_idx['test'][50900:]],
            'y_pred': y_pred[split_idx['test'][50900:]],
        })['rocauc']
    else:
        y_pred = y_pred.argmax(dim=-1, keepdim=True)

        realcase = evaluator.eval({
            'y_true': data.y[split_idx['test'][50900:]],
            'y_pred': y_pred[split_idx['test'][50900:]],
        })['acc']

    # np.save('./node-level/realnodes_label',data.y[split_idx['test'][50900:]].cpu().numpy())
    np.save('./node-level/realnodes_pred'+mod_name,
            y_pred[split_idx['test'][50900:]].cpu().numpy())
    return realcase


def main():
    parser = argparse.ArgumentParser(description='node-level (GNN)')
    parser.add_argument('--device', type=int, default=0)
    parser.add_argument('--log_steps', type=int, default=2)
    parser.add_argument('--use_sage', action='store_true')
    parser.add_argument('--use_gin', action='store_true')
    parser.add_argument('--use_rgcn', action='store_true')
    parser.add_argument('--num_layers', type=int, default=3)
    parser.add_argument('--hidden_channels', type=int, default=64)  # 256
    parser.add_argument('--dropout', type=float, default=0.5)
    parser.add_argument('--lr', type=float, default=0.01)
    parser.add_argument('--epochs', type=int, default=500)
    parser.add_argument('--runs', type=int, default=5)
    parser.add_argument('--if_auc', type=int, default=0)
    parser.add_argument('--dataset', type=str, default='ogbn-cdfg')
    parser.add_argument('--num_output', type=int, default=3)
    parser.add_argument('--res', type=str, default='FF')
    args = parser.parse_args()

    if args.if_auc == False:
        args.num_output = 2
    print(args)
    device = f'cuda:{args.device}' if torch.cuda.is_available() else 'cpu'
    device = torch.device(device)
    if args.dataset == 'ogbn-cdfg':
        meta_dict = torch.load('./node-level/test_ogbn_cdfg/meta_dict.pt')
    else:
        meta_dict = torch.load('./node-level/test_ogbn_dfg/meta_dict.pt')
    if args.use_rgcn:
        dataset = PygNodePropPredDataset(
            name=args.dataset, meta_dict=meta_dict, transform=T.ToSparseTensor(attr='edge_attr'))
    else:
        dataset = PygNodePropPredDataset(
            name=args.dataset, meta_dict=meta_dict, transform=T.ToSparseTensor())
    data = dataset[0]
    data.adj_t = data.adj_t.to_symmetric()
    data = data.to(device)
    if args.if_auc == False:
        if args.res == 'FF':
            data.y = data.y[:, 0].reshape(-1, 1)
        elif args.res == 'LUT':
            data.y = data.y[:, 1].reshape(-1, 1)
        elif args.res == 'DSP':
            data.y = data.y[:, 2].reshape(-1, 1)

    split_idx = dataset.get_idx_split()
    train_idx = torch.from_numpy(split_idx['train']).to(device)
    if args.use_sage:
        model = SAGE(data.num_features, args.hidden_channels,
                     args.num_output, args.num_layers,
                     args.dropout, args.if_auc).to(device)
        mod_name = 'sage'
        print(mod_name)
    elif args.use_gin:
        model = GIN(data.num_features, args.hidden_channels,
                    args.num_output, args.num_layers,
                    args.dropout, args.if_auc).to(device)
        mod_name = 'gin'
        print(mod_name)
    elif args.use_rgcn:
        model = RGCN(data.num_features, args.hidden_channels,
                     args.num_output, args.num_layers,
                     args.dropout, args.if_auc).to(device)
        mod_name = 'rgcn'
        print(mod_name)

    else:
        model = GCN(data.num_features, args.hidden_channels,
                    args.num_output, args.num_layers,
                    args.dropout, args.if_auc).to(device)
        mod_name = 'gcn'
        print(mod_name)

    evaluator = Evaluator(name='ogbn-cdfg')
    logger = Logger(args.runs, args)

    for run in range(args.runs):
        model.reset_parameters()
        optimizer = torch.optim.Adam(model.parameters(), lr=args.lr)
        for epoch in range(1, 1 + args.epochs):
            loss = train(model, data, train_idx, optimizer, args.if_auc)
            result = test(model, data, split_idx,
                          evaluator, if_auc=args.if_auc)
            logger.add_result(run, result)

            if epoch % args.log_steps == 0:
                train_acc, valid_acc, test_acc = result
                print(f'Run: {run + 1:02d}, '
                      f'Epoch: {epoch:02d}, '
                      f'Loss: {loss:.4f}, '
                      f'Train: {100 * train_acc:.2f}%, '
                      f'Valid: {100 * valid_acc:.2f}% '
                      f'Test: {100 * test_acc:.2f}%')

        logger.print_statistics(run)
        if args.dataset == 'ogbn-cdfg':
            real_res = realcase_test(
                model, data, split_idx, evaluator, mod_name, if_auc=args.if_auc)
            print("Real-case result is", real_res)
    logger.print_statistics()


if __name__ == "__main__":
    main()
