import os.path as osp

import torch
import torch.nn.functional as F
from torch.nn import ModuleList, Embedding
from torch.nn import Sequential, Linear, ReLU, GRU
from torch.optim.lr_scheduler import ReduceLROnPlateau
from torch_geometric.data import DataLoader
from torch_geometric.nn import SGConv, BatchNorm
from node_encoder import NodeEncoder,EdgeEncoder
from torch_geometric.nn import global_add_pool, global_mean_pool, global_max_pool, GlobalAttention, Set2Set

class Net(torch.nn.Module):
    def __init__(self, num_tasks=1, num_layer=4, emb_dim=300, drop_ratio = 0.5, JK = "sum", residual = False, graph_pooling = "sum"):
        super(Net, self).__init__()

        self.num_layer = num_layer
        self.drop_ratio = drop_ratio
        self.JK = JK
        ### add residual connection or not
        self.residual = residual
        self.emb_dim = emb_dim
        self.num_tasks = num_tasks
        self.graph_pooling = graph_pooling

        if self.num_layer < 2:
            raise ValueError("Number of GNN layers must be greater than 1.")

        
        self.node_emb = NodeEncoder(emb_dim)
        self.edge_emb = EdgeEncoder(emb_dim = emb_dim)

        self.convs = SGConv(emb_dim, emb_dim, K=num_layer)
        
        ### Pooling function to generate whole-graph embeddings
        if self.graph_pooling == "sum":
            self.pool = global_add_pool
        elif self.graph_pooling == "mean":
            self.pool = global_mean_pool
        elif self.graph_pooling == "max":
            self.pool = global_max_pool
        elif self.graph_pooling == "attention":
            self.pool = GlobalAttention(gate_nn = torch.nn.Sequential(torch.nn.Linear(emb_dim, 2*emb_dim), torch.nn.BatchNorm1d(2*emb_dim), torch.nn.ReLU(), torch.nn.Linear(2*emb_dim, 1)))
        elif self.graph_pooling == "set2set":
            self.pool = Set2Set(emb_dim, processing_steps = 2)
        else:
            raise ValueError("Invalid graph pooling type.")

        self.graph_pred_linear=ModuleList()
        self.graph_norm=ModuleList()

        if graph_pooling == "set2set":
            self.graph_pred_linear.append(Linear(2*emb_dim, 2*emb_dim))
            self.graph_pred_linear.append(Linear(2*emb_dim, emb_dim))
            self.graph_pred_linear.append(Linear(emb_dim, self.num_tasks))

            self.graph_norm.append(BatchNorm(2*emb_dim))
            self.graph_norm.append(BatchNorm(emb_dim))
        else:
            self.graph_pred_linear.append(Linear(emb_dim, 2*emb_dim))
            self.graph_pred_linear.append(Linear(2*emb_dim, emb_dim))
            self.graph_pred_linear.append(Linear(emb_dim, self.num_tasks))

            self.graph_norm.append(BatchNorm(2*emb_dim))
            self.graph_norm.append(BatchNorm(emb_dim))

    def forward(self, batched_data):
        x, edge_index, edge_attr, batch = batched_data.x, batched_data.edge_index, batched_data.edge_attr, batched_data.batch

        node_representation = self.convs(self.node_emb(x), edge_index)
        
        h_graph = F.dropout(self.pool(node_representation, batched_data.batch))

        ### final predictions
        h_graph = self.graph_pred_linear[0](h_graph)
        h_graph = self.graph_norm[0](h_graph)
        h_graph = F.dropout(F.relu(h_graph), self.drop_ratio, training = self.training)

        h_graph = self.graph_pred_linear[1](h_graph)
        h_graph = self.graph_norm[1](h_graph)
        h_graph = F.dropout(F.relu(h_graph), self.drop_ratio, training = self.training)

        return self.graph_pred_linear[2](h_graph)