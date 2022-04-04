import os
from ogb.io import DatasetSaver
import numpy as np


def reorder(node, label, nonrtl_add, if_cdfg=False):
    """
    to reorder rtl and non-rtl nodes randomly so as to balence the dataset.
    """
    rtl_node_feat = []
    nonrtl_node_feat = []
    rtl_node_lable = []
    nonrtl_node_lable = []
    for i, l in enumerate(label.transpose()):
        if l.any():
            rtl_node_feat.append(node[0]['node_feat'][i])
            rtl_node_lable.append(l)
        else:
            nonrtl_node_feat.append(node[0]['node_feat'][i])
            nonrtl_node_lable.append(l)
    rtlnum = len(rtl_node_feat)
    nonrtlnum = len(nonrtl_node_feat)
    rtl_node_feat = np.array(rtl_node_feat)
    nonrtl_node_feat = np.array(nonrtl_node_feat)
    # dfg nonrtl_add 0.132  for nonrtlnum, cdfg nonrtl_add 0.107
    # new_nodefeat=np.append(rtl_node_feat,nonrtl_node_feat[0:int(nonrtlnum*nonrtl_add)],axis=0)
    # new_label=np.append(rtl_node_lable,nonrtl_node_lable[0:int(nonrtlnum*nonrtl_add)],axis=0)

    if if_cdfg:  # cdfg will carry real-case in the test set
        real_nodelist = np.load(
            './node-level/realcase_nodelist.npy', allow_pickle=True)
        real_node_label = np.load(
            './node-level/realcase_nodelist_label.npy').transpose()
        base = node[0]['num_nodes']
        real_nodelist[0]['edge_index'] = real_nodelist[0]['edge_index']+base
        new_nodefeat = np.append(np.append(np.append(rtl_node_feat, nonrtl_node_feat[0:int(nonrtlnum*nonrtl_add)], axis=0),
                                           real_nodelist[0]['node_feat'], axis=0),
                                 nonrtl_node_feat[int(nonrtlnum*nonrtl_add):], axis=0)

        new_label = np.append(np.append(np.append(rtl_node_lable, nonrtl_node_lable[0:int(nonrtlnum*nonrtl_add)], axis=0),
                                        real_node_label, axis=0),
                              nonrtl_node_lable[int(nonrtlnum*nonrtl_add):], axis=0)
        node[0]['edge_feat'] = np.append(
            node[0]['edge_feat'], real_nodelist[0]['edge_feat'], axis=0)
        node[0]['edge_index'] = np.append(
            node[0]['edge_index'], real_nodelist[0]['edge_index'], axis=1)

    else:
        new_nodefeat = np.append(np.append(rtl_node_feat, nonrtl_node_feat[0:int(nonrtlnum*nonrtl_add)], axis=0),
                                 nonrtl_node_feat[int(nonrtlnum*nonrtl_add):], axis=0)

        new_label = np.append(np.append(rtl_node_lable, nonrtl_node_lable[0:int(nonrtlnum*nonrtl_add)], axis=0),
                              nonrtl_node_lable[int(nonrtlnum*nonrtl_add):], axis=0)

    node[0]['node_feat'] = new_nodefeat
    node[0]['num_nodes'] = new_nodefeat.shape[0]
    label = new_label

    return node, label


def change_edge_type(node_list):
    """
    to code different edge feature combinations into numbers.
    """
    key = []
    for i in node_list[0]['edge_feat']:
        key.append((int(i[0]))*4+int(i[1])-1)

    node_list[0]['edge_feat'] = np.array(key, dtype=int)
    return node_list


def build_dataset(dataset_name, nodes_list, lable, mapping_path, used_split, if_cdfg=False):
    # constructor
    saver = DatasetSaver(dataset_name=dataset_name,
                         is_hetero=False, version=1, root='./node-level/test')
    # saving a list of graphs
    saver.save_graph_list(nodes_list)
    # saving lables
    saver.save_target_labels(lable)
    # split the dataset
    if if_cdfg:
        num_data = 339333
    else:
        print(lable.shape[0])
        num_data = int(used_split*lable.shape[0])
    split_idx = dict()
    perm = np.random.permutation(num_data)

    split_idx['train'] = perm[:int(0.8*num_data)]
    split_idx['valid'] = perm[int(0.8*num_data): int(0.85*num_data)]
    split_idx['test'] = perm[int(0.85*num_data):]
    if if_cdfg:
        real_perm = np.arange(339333, 365783)  # 338497:341169
        split_idx['test'] = np.append(split_idx['test'], real_perm)
    saver.save_split(split_idx, split_name='random')

    # mapping
    # prepare mapping information first and store it under this directory (empty below).
    os.makedirs(mapping_path)
    os.mknod(os.path.join(mapping_path, 'README.md'))
    saver.copy_mapping_dir(mapping_path)

    # task info
    saver.save_task_info(task_type='classification',
                         eval_metric='rocauc', num_classes=3)
    # meta_dict, usefule for debugging
    meta_dict = saver.get_meta_dict()

    # test
    from ogb.nodeproppred import NodePropPredDataset
    dataset = NodePropPredDataset(dataset_name, meta_dict=meta_dict)

    # see if it is working properly
    print(dataset[0])
    print(dataset.get_idx_split())
    # saver.zip()
    # saver.cleanup()


if __name__ == '__main__':
    # CDFG
    # build for cdfg 93222 for training (0.053), this proportion is determined for balancing the
    # -rtl nodes and non-rtl nodes.
    nodes_list = np.load('./node-level/cdfg_nodelist.npy', allow_pickle=True)
    node_lable = np.load('./node-level/cdfg_nodelable.npy')
    nodes_list, node_lable = reorder(
        nodes_list, node_lable, 0.107, if_cdfg=True)  # 169693 rtl nodes
    node_list = change_edge_type(nodes_list)
    dataset_name = 'ogbn-cdfg'
    mapping_path = './node-level/mapping_'+dataset_name
    build_dataset(dataset_name, nodes_list, node_lable,
                  mapping_path, 0.19, if_cdfg=True)  # only use 0.193

    # DFG
    # # build for dfg  81514 for training(0.064), this proportion is determined for balancing the
    # -rtl nodes and non-rtl nodes.
    nodes_list = np.load('./node-level/dfg_nodelist.npy', allow_pickle=True)
    node_lable = np.load('./node-level/dfg_nodelable.npy')
    nodes_list, node_lable = reorder(
        nodes_list, node_lable, 0.132)  # 149452 rtl nodes
    node_list = change_edge_type(nodes_list)
    dataset_name = 'ogbn-dfg'
    mapping_path = './node-level/mapping_'+dataset_name
    build_dataset(dataset_name, nodes_list, node_lable, mapping_path, 0.233)
