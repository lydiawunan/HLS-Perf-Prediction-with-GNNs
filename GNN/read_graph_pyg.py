import pandas as pd
import torch
from torch_geometric.data import Data
import os.path as osp
import numpy as np
from read_graph_raw import read_csv_graph_raw
from tqdm import tqdm

def read_graph_pyg(raw_dir, add_inverse_edge = False, additional_node_files = [], additional_edge_files = [], binary = False):

    graph_list = read_csv_graph_raw(raw_dir, add_inverse_edge, additional_node_files = additional_node_files, additional_edge_files = additional_edge_files)
    
    pyg_graph_list = []

    print('Converting graphs into PyG objects...')

    for graph in tqdm(graph_list):
        g = Data()
        g.__num_nodes__ = graph['num_nodes']
        g.edge_index = torch.from_numpy(graph['edge_index'])

        del graph['num_nodes']
        del graph['edge_index']

        if graph['edge_feat'] is not None:
            g.edge_attr = torch.from_numpy(graph['edge_feat'])
            del graph['edge_feat']

        if graph['node_feat'] is not None:
            g.x = torch.from_numpy(graph['node_feat'])
            del graph['node_feat']

        for key in additional_node_files:
            g[key] = torch.from_numpy(graph[key])
            del graph[key]

        for key in additional_edge_files:
            g[key] = torch.from_numpy(graph[key])
            del graph[key]

        pyg_graph_list.append(g)

    return pyg_graph_list



if __name__ == '__main__':
    pass