import torch
from features_binary import get_node_feature_dims, get_edge_feature_dims 
#from features_numerical import get_node_feature_dims, get_edge_feature_dims 
#from features import get_node_feature_dims, get_edge_feature_dims 

full_node_feature_dims = get_node_feature_dims()
full_edge_feature_dims = get_edge_feature_dims()

class NodeEncoder(torch.nn.Module):

    def __init__(self, emb_dim):
        super(NodeEncoder, self).__init__()
        
        self.node_embedding_list = torch.nn.ModuleList()

        for i, dim in enumerate(full_node_feature_dims):
            emb = torch.nn.Embedding(dim, emb_dim)
            torch.nn.init.xavier_uniform_(emb.weight.data)
            self.node_embedding_list.append(emb)

    def forward(self, x):
        x_embedding = 0
        for i in range(x.shape[1]):
            x_embedding += self.node_embedding_list[i](x[:,i])

        return x_embedding


class EdgeEncoder(torch.nn.Module):
    
    def __init__(self, emb_dim):
        super(EdgeEncoder, self).__init__()
        
        self.edge_embedding_list = torch.nn.ModuleList()

        for i, dim in enumerate(full_edge_feature_dims):
            emb = torch.nn.Embedding(dim, emb_dim)
            torch.nn.init.xavier_uniform_(emb.weight.data)
            self.edge_embedding_list.append(emb)

    def forward(self, edge_attr):
        edge_embedding = 0
        for i in range(edge_attr.shape[1]):
            edge_embedding += self.edge_embedding_list[i](edge_attr[:,i])

        return edge_embedding   


if __name__ == '__main__':
    from dataset_pyg import PygGraphPropPredDataset
    dataset = PygGraphPropPredDataset(name = 'dfg_dsp')
    node_enc = NodeEncoder(2)
    edge_enc = EdgeEncoder(5)

    print(node_enc(dataset[1].x))
    print(edge_enc(dataset[1].edge_attr))




