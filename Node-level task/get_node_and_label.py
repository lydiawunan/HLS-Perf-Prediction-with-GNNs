
import csv
from adb_sup import parse_xml_into_graph_single
import os
import utility
import numpy as np

category_map = {'ports': 0, 'blocks': 1, 'nodes': 2}
# all feat
# nodes_features_dict=[ 'bitwidth', 'm_Display', 'm_isOnCriticalPath', 'm_isStartOfPath', 'm_delay',
#   'm_topoIndex', 'm_isLCDNode', 'm_clusterGroupNumber', 'type','const', 'const-bitwidth']
# unified feat
nodes_features_dict = ['bitwidth',  'm_isStartOfPath',
                       'm_isLCDNode', 'm_clusterGroupNumber']


def gain_graph(dir, save_dir):
    """
    dir: the path you want to save your results
    mapping_path: the corresponding mapping.csv file of the dataset 
    save_dir: the path you want to save your json file
    """
    if not os.path.exists(save_dir):
        os.mkdir(save_dir)
    for i in os.listdir(dir):
        # name=i[0].replace('/','_')
        # path=dir+name+'.adb'
        path = dir+i
        try:
            g = parse_xml_into_graph_single(0, path)
            utility.json_save(g, save_dir+i.replace('.adb', ''))
        except BaseException:
            print('this file: "{}" does not exist.'.format(i))


def gain_np_data(mapping_path, cdfg_dir):
    base_index = 0
    node_feat = []
    edge_feat = []
    node_lable = []
    edges = np.empty((2, 0))
    with open(mapping_path, 'r') as f:
        file_list = csv.reader(f)
        # test for realcase
        # for i in os.listdir('./real_case/real_json/'): #test
        # path='./real_case/real_json/'+i.replace('.json','') #test
        # print(path) #test
        for i in file_list:
            path = cdfg_dir+i[0].replace('/', '_')
            try:
                g = utility.json_load(path)
                t_edge_list = g.edges
                # reindex all the nodes. Because in node-level, we see every graph as a sub-graph of only
                # one big grpah, so we keep counting up the nodes indexes.
                new_index, t_edge_list = reindex(
                    g.nodes, np.array(t_edge_list, dtype=int), base_index)
                for i in g.nodes.keys():
                    nf = []
                    lb = []  # 3 lables FF,LUT,and DSP
                    try:
                        nf.append(category_map[g.nodes[i]['category']])
                    except BaseException:
                        print('this node does not exist')
                        continue
                    for k in nodes_features_dict:
                        if k in g.nodes[i].keys():
                            nf.append(g.nodes[i][k])
                        else:
                            nf.append('-1')
                    if g.nodes[i]['category'] == 'nodes':
                        lb = [g.nodes[i]['FF'], g.nodes[i]
                              ['LUT'], g.nodes[i]['DSP']]
                    else:
                        lb = ['0', '0', '0']
                    node_feat.append(nf)
                    node_lable.append(lb)
                edges = np.concatenate(
                    (edges, t_edge_list.transpose()), axis=1)
                edge_feat.extend(get_edge_feat(g))
                base_index += len(g.nodes)

            except BaseException:
                print('This file {} getting data failed.'.format(path))
    nodes_list = []
    nodes_set = dict()
    # save the nodes info as OGB standard
    nodes_set['edge_index'] = edges
    nodes_set['num_nodes'] = len(node_lable)
    nodes_set['node_feat'] = np.array(node_feat, dtype=float)
    nodes_set['edge_feat'] = np.array(edge_feat, dtype=int)
    nodes_list.append(nodes_set)
    node_lable = np.array(node_lable, dtype=float).transpose()

    return nodes_list, node_lable


def reindex(nodes, edges, base):
    map = {}
    nodeslist = np.array(nodes, dtype=int)
    for i, n in enumerate(nodes):
        if nodes[n] == {}:
            print('no')
            continue
        map[n] = i+base
        nodeslist[i] = i+base
    for i, n1 in enumerate(edges):
        for j, n2 in enumerate(n1):
            try:
                edges[i, j] = map[n2]
            except KeyError:
                continue
    return map, edges


def get_edge_feat(g):
    label = []

    for i in g.adj.keys():
        for j in g.adj[i]:
            label.append([g.adj[i][j]['is_back_edge'],
                         g.adj[i][j]['edge_type']])
            # print([g.adj[i][j]['is_back_edge'],g.adj[i][j]['edge_type']])
    return label


if __name__ == '__main__':
    # cdfg and dfg
    cdfgadbdir = './cdfgadbfile/'
    dfgadbdir = './dfgadbfile/'
    cdfg_mapping_path = './dataset/cdfg/mapping.csv'
    dfg_mapping_path = './dataset/dfg/mapping.csv'
    cdfg_save_dir = './node-level/cdfg_json/'
    dfg_save_dir = './node-level/dfg_json/'

    # transform adb graph to json graph, we already provide the json files so you don't have to generate json again.
    # gain_graph(cdfgadbdir,cdfg_save_dir)
    # gain_graph(dfgadbdir,dfg_save_dir)

    # transform json to ndarray datatype
    node_list, node_lable = gain_np_data(cdfg_mapping_path, cdfg_save_dir)
    np.save('./node-level/cdfg_nodelist', node_list)
    np.save('./node-level/cdfg_nodelable', node_lable)
    rtl_node_list, rtl_node_lable = gain_np_data(
        dfg_mapping_path, dfg_save_dir)
    np.save('./node-level/dfg_nodelist', rtl_node_list)
    np.save('./node-level/dfg_nodelable', rtl_node_lable)
    # ----------------------------------------------------------------------------------------------------------------------------

    # real case
    realcasedir = './real_case/real_adb/'
    real_save_dir = './real_case/real_json/'
    gain_graph(realcasedir, cdfg_mapping_path, real_save_dir)
    node_list, node_lable = gain_np_data(dfg_mapping_path, dfg_save_dir)
    np.save('./node-level/realcase_nodelist', node_list)
    np.save('./node-level/realcase_nodelist_label', node_lable)
