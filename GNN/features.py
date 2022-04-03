import json
import pandas as pd

allowable_features = {
    'node_category' : ['nodes', 'blocks', 'ports', 'misc'], 
    'bitwidth' : list(range(0, 256)) + ['misc'], 
    'opcode_category' : ['terminator','binary_unary', 'bitwise', 'conversion','memory','aggregate','other','misc'], 
    'possible_opcode_list' : [
        'br', 'ret', 'switch',
        'add', 'dadd', 'fadd', 'sub', 'dsub', 'fsub', 'mul', 'dmul', 'fmul', 'udiv', 'ddiv', 'fdiv', 'sdiv', 'urem', 'srem', 'frem', 'dexp', 'dsqrt',
        'shl', 'lshr', 'ashr', 'and', 'xor', 'or',
        'uitofp', 'sitofp', 'uitodp', 'sitodp', 'bitconcatenate', 'bitcast', 'zext', 'sext', 'fpext', 'trunc', 'fptrunc',
        'extractvalue', 'insertvalue',
        'alloca', 'load', 'store', 'read', 'write', 'getelementptr',
        'phi', 'call', 'icmp', 'dcmp', 'fcmp', 'select', 'bitselect', 'partselect', 'mux', 'dacc',
        'misc'
    ],
    'possible_is_start_of_path': [0, 1, 'misc'],
    'possible_is_LCDnode':[0, 1, 'misc'],
    'possible_cluster_group_num': [-1] + list(range(0, 256)) + ['misc'],
    
    'possible_edge_type_list' : [1, 2, 3, 'misc'], 
    'possible_is_back_edge': [0, 1],
}

def safe_index(l, e):
    """
    Return index of element e in list l. If e is not present, return the last index
    """
    try:
        return l.index(e)
    except:
        return len(l) - 1

def opcode_type(opcode):
    if opcode in {'br', 'ret', 'switch'}:
        t='terminator'
    if opcode in {'add', 'dadd', 'fadd', 'sub', 'dsub', 'fsub', 'mul', 'dmul', 'fmul', 'udiv', 'ddiv', 'fdiv', 'sdiv', 'urem', 'srem', 'frem', 'dexp', 'dsqrt'}:
        t='binary_unary'
    if opcode in {'shl', 'lshr', 'ashr', 'and', 'xor', 'or'}:
        t='bitwise'
    if opcode in {'uitofp', 'sitofp', 'uitodp', 'sitodp', 'bitconcatenate', 'bitcast', 'zext', 'sext', 'fpext', 'trunc', 'fptrunc'}:
        t='conversion'
    if opcode in {'alloca', 'load', 'store', 'read', 'write', 'getelementptr'}:
        t='memory'
    if opcode in {'extractvalue', 'insertvalue'}:
        t='aggregate'
    if opcode in {'phi', 'call', 'icmp', 'dcmp', 'fcmp', 'select', 'bitselect', 'partselect', 'mux', 'dacc'}:
        t='other'
    return t


def node_to_feature_vector(node):
    """
    Converts node object to feature list of indices
    :return: list
    """
    if node['category']=='nodes':
        node_feature = [
                safe_index(allowable_features['node_category'], node['category']),
                safe_index(allowable_features['bitwidth'], int(node['bitwidth'])),
                safe_index(allowable_features['opcode_category'], opcode_type(node['opcode'])),
                safe_index(allowable_features['possible_opcode_list'], node['opcode']),
                safe_index(allowable_features['possible_is_start_of_path'], int(node['m_isStartOfPath'])),
                safe_index(allowable_features['possible_is_LCDnode'], int(node['m_isLCDNode'])),
                safe_index(allowable_features['possible_cluster_group_num'], int(node['m_clusterGroupNumber'])),
                ]
    elif node['category']=='ports':
        node_feature = [
                safe_index(allowable_features['node_category'], node['category']),
                safe_index(allowable_features['bitwidth'], int(node['bitwidth'])),
                len(allowable_features['opcode_category'])-1,
                len(allowable_features['possible_opcode_list'])-1,
                len(allowable_features['possible_is_start_of_path'])-1,
                len(allowable_features['possible_is_LCDnode'])-1,
                len(allowable_features['possible_cluster_group_num'])-1
                ]
    elif node['category']=='blocks':
        node_feature = [
                safe_index(allowable_features['node_category'], node['category']),
                len(allowable_features['bitwidth'])-1,
                len(allowable_features['opcode_category'])-1,
                len(allowable_features['possible_opcode_list'])-1,
                len(allowable_features['possible_is_start_of_path'])-1,
                len(allowable_features['possible_is_LCDnode'])-1,
                len(allowable_features['possible_cluster_group_num'])-1
                ]
    return node_feature

def get_node_feature_dims():
    return list(map(len, [
        allowable_features['node_category'],
        allowable_features['bitwidth'],
        allowable_features['opcode_category'],
        allowable_features['possible_opcode_list'],
        allowable_features['possible_is_start_of_path'],
        allowable_features['possible_is_LCDnode'],
        allowable_features['possible_cluster_group_num']
        ]))


def edge_to_feature_vector(edge):
    """
    Converts edge to feature list of indices
    :return: list
    """
    bond_feature = [
                safe_index(allowable_features['possible_edge_type_list'], int(edge['edge_type'])),
                allowable_features['possible_is_back_edge'].index(int(edge['is_back_edge']))
            ]
    return bond_feature

def get_edge_feature_dims():
    return list(map(len, [
        allowable_features['possible_edge_type_list'],
        allowable_features['possible_is_back_edge']
        ]))

'''
num_graph=18570
#19120 for DFG
read_dir='CDFG/'

node_feat=[]
edge_list=[]
edge_feat=[]

for i in range(num_graph):
    f = open(read_dir+'graph_'+str(i)+'.json', 'r')
    d = json.load(f)
    f.close()
    nodes=d['nodes']
    edges=d['edges']

    node_index_map=dict() # map the node name to the index
    index=0

    for n in nodes:
        if n[0] not in node_index_map:
            node_index_map[n[0]]=index
        node_feat.append(node_to_feature_vector(n[1]))
        index=index+1
    
    for e in edges:
        source=node_index_map[e[0]]
        sink=node_index_map[e[1]]
        edge_list.append([source,sink])
        edge_feat.append(edge_to_feature_vector(e[2]))

NODE=pd.DataFrame(node_feat)
EDGE_list=pd.DataFrame(edge_list)
EDGE_feat=pd.DataFrame(edge_feat)

NODE.to_csv('node-feat.csv',index=False,header=False)
EDGE_list.to_csv('edge.csv',index=False,header=False)
EDGE_feat.to_csv('edge-feat.csv',index=False,header=False)
'''        