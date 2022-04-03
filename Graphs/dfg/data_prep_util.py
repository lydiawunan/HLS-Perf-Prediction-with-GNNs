import xml.etree.cElementTree as et
import networkx as nx
import matplotlib.pyplot as plt
import json
import subprocess
import time
from os import path
import glob
import pandas as pd
import re

res_considered = ['FF', 'LUT', 'DSP']

def parse_xml_into_graph_single(xml_file):
    prefix = ''
    G = nx.DiGraph()
    parser = et.parse(xml_file)
    root = parser.getroot()
    cdfg = root.findall('*/cdfg')[0]

    # rtl hash table
    rtl_res_table = get_rtl_hash_table(root)

    ### find edges and build the graph
    #print("Adding Edges")
    edge_id_max = -1
    for edges in cdfg.iter('edges'):
        for edge in edges.iter('item'):
            source = edge.find('source_obj').text
            sink = edge.find('sink_obj').text
            edge_id = edge.find('id').text
            edge_id_max = max(int(edge_id), edge_id_max)
            is_back_edge = edge.find('is_back_edge').text
            edge_type = edge.find('edge_type').text
            G.add_edges_from([(prefix + source, prefix + sink, {'edge_name': prefix + edge_id, 'is_back_edge': is_back_edge, 'edge_type': edge_type})])

    ### add node attributes
    #print("Adding Nodes")
    for nodes in cdfg.iter('nodes'):
        for node in nodes.findall('item'):
            node_id = node.findall('*/*/id')[0].text
            node_name = prefix + node_id
        
            if node_name not in G.nodes():
                #print('Node %s (type: nodes) not in the graph' % node_name)
                op_code = node.findall('opcode')[0].text
                if op_code == 'ret':
                    G.add_node(node_name)
                    G.nodes[node_name]['node_name'] = node_name
                    G.nodes[node_name]['category']='nodes'
                    G.nodes[node_name]['bitwidth'] = node.findall('*/bitwidth')[0].text
                    G.nodes[node_name]['opcode'] = node.findall('opcode')[0].text
                    G.nodes[node_name]['m_Display'] = node.findall('m_Display')[0].text
                    G.nodes[node_name]['m_isOnCriticalPath'] = node.findall('m_isOnCriticalPath')[0].text
                    G.nodes[node_name]['m_isStartOfPath'] = node.findall('m_isStartOfPath')[0].text
                    G.nodes[node_name]['m_delay'] = node.findall('m_delay')[0].text
                    G.nodes[node_name]['m_topoIndex'] = node.findall('m_topoIndex')[0].text
                    G.nodes[node_name]['m_isLCDNode'] = node.findall('m_isLCDNode')[0].text
                    G.nodes[node_name]['m_clusterGroupNumber'] = node.findall('m_clusterGroupNumber')[0].text
                    G.nodes[node_name]['type'] = node.findall('*/*/type')[0].text
                continue

            G.nodes[node_name]['node_name'] = node_name        
            G.nodes[node_name]['category'] = 'nodes'
            G.nodes[node_name]['bitwidth'] = node.findall('*/bitwidth')[0].text
            G.nodes[node_name]['opcode'] = node.findall('opcode')[0].text
            G.nodes[node_name]['m_Display'] = node.findall('m_Display')[0].text
            G.nodes[node_name]['m_isOnCriticalPath'] = node.findall('m_isOnCriticalPath')[0].text
            G.nodes[node_name]['m_isStartOfPath'] = node.findall('m_isStartOfPath')[0].text
            G.nodes[node_name]['m_delay'] = node.findall('m_delay')[0].text
            G.nodes[node_name]['m_topoIndex'] = node.findall('m_topoIndex')[0].text
            G.nodes[node_name]['m_isLCDNode'] = node.findall('m_isLCDNode')[0].text
            G.nodes[node_name]['m_clusterGroupNumber'] = node.findall('m_clusterGroupNumber')[0].text
            G.nodes[node_name]['type'] = node.findall('*/*/type')[0].text
            # rtl info below
            # every nodes has the three features, so we initilize them as 0.
            G.nodes[node_name]['LUT'] = '0'
            G.nodes[node_name]['FF'] = '0'
            G.nodes[node_name]['DSP'] = '0'
            t_rtlname = node.findall('*/*/rtlName')[0].text
            if t_rtlname != None:
                # if this nodes has a rtlName info
                if t_rtlname in rtl_res_table.keys():
                    # if this rtlName has corresponding resources info
                    # print(t_rtlname, '+++++++++++', rtl_res_table[t_rtlname])
                    res_name = rtl_res_table[t_rtlname].keys()
                    for i in res_name:
                        # rewrite the initial number with the actual number
                        G.nodes[node_name][i] = rtl_res_table[t_rtlname][i]

    ## blocks are for control signals
    for nodes in cdfg.iter('blocks'):
        for node in nodes.findall('item'):
            node_id = node.findall('*/id')[0].text
            node_name = prefix + node_id

            if node_name not in G.nodes():
                #print('Node %s (type: blocks) not in the graph' % node_name)
                continue
            G.nodes[node_name]['node_name'] = node_name        
            G.nodes[node_name]['category'] = 'blocks'
            G.nodes[node_name]['type'] = node.findall('*/type')[0].text
    
    ## ports are function arguments 
    for nodes in cdfg.iter('ports'):
        for node in nodes.findall('item'):
            node_id = node.findall('*/*/id')[0].text
            node_name = prefix + node_id

            if node_name not in G.nodes():
                #print('Node %s (type: ports) not in the graph' % node_name)
                continue
            G.nodes[node_name]['node_name'] = node_name        
            G.nodes[node_name]['category'] = 'ports'
            G.nodes[node_name]['type'] = node.findall('*/*/type')[0].text
            G.nodes[node_name]['bitwidth'] = node.findall('*/bitwidth')[0].text
            G.nodes[node_name]['direction'] = node.findall('direction')[0].text
            G.nodes[node_name]['if_type'] = node.findall('if_type')[0].text
            G.nodes[node_name]['array_size'] = node.findall('array_size')[0].text

    ## no need to keep consts as nodes in the graph
    ## remove to reduce the graph size
    for nodes in cdfg.iter('consts'):
        for node in nodes.findall('item'):
            node_id = node.findall('*/*/id')[0].text
            node_name = prefix + node_id

            if node_name not in G.nodes():
                #print('Node %s (type: consts) not in the graph' % node_name)
                continue
            for v in G.neighbors(node_name):
                G.nodes[v]['const'] = node_name
                G.nodes[v]['const-bitwidth'] = node.findall('*/bitwidth')[0].text
            # remove the const node
            G.remove_node(node_name)
            #print("const node %s removed" % node_name)

    #edge_list = list(G.edges)
    #print(edge_list)
    #node_list = list(G.nodes)
    #print(node_list)
    return G

def get_rtl_hash_table(root):
    """
    param: 
        root: the root of the adb file
    return:
        rtl_table: This file returns a hash table of resources and the rtlNames.
    """
    all_rtl = root.findall('*/res/*/item')
    rtl_table = {}
    if_add = False
    rep = re.compile(' \(.*\)')
    for i in all_rtl:
        res_table = {}
        rtl_name = i.find('first').text
        rtl_res = i.find('second')
        if rtl_name not in rtl_table.keys():
            for res in rtl_res.iter('item'):
                try:
                    res_name = res.findall('first')[0].text
                    res_num = res.findall('second')[0].text
                except BaseException:
                    # print('The RTL $',rtl_name,'& does not contain any resource info.')
                    break
                else:
                    if res_name in res_considered:
                        res_table[res_name] = res_num
                        if_add = True
        if if_add:
            rtl_table[re.sub(rep, '', rtl_name)] = res_table
        if_add = False
    return rtl_table



### save the graph into json
def json_save(G, fname):
    f = open(fname + '.json', 'w')
    G_dict = dict(nodes=[[n, G.nodes[n]] for n in G.nodes()], \
                  edges=[(e[0], e[1], G.edges[e]) for e in G.edges()])
    json.dump(G_dict, f)
    f.close()

### check if all real perf are zeros
def check_zero(fname):
    is_zero=0 # not all zeros
    f = open(fname + '.json', 'r')
    d = json.load(f)
    f.close()
    if d['xc7z020-clg484-1']['LUT']==0 and d['xc7z020-clg484-1']['CP']==0:
        is_zero=1

    return is_zero


def get_real_perf(fname):
    f = open(fname + '.json', 'r')
    d = json.load(f)
    f.close()
    DSP=d['xc7z020-clg484-1']['DSP']
    LUT=d['xc7z020-clg484-1']['LUT']
    CP=d['xc7z020-clg484-1']['CP']
    FF=d['xc7z020-clg484-1']['FF']
    SLICE=d['xc7z020-clg484-1']['SLICE']
    BRAM=d['xc7z020-clg484-1']['BRAM']

    return DSP, LUT, CP, FF, SLICE, BRAM


### count types in each category
def count_types(num_graph,dic):
    #num_graph=12065

    bitwidth=set()
    opcode=set()
    cluster=set()
    topo_index=set()
    opcode.add('ret')

    for i in range(num_graph):
        fname=dic+'graph_'+str(i)
        f = open(fname + '.json', 'r')
        d = json.load(f)
        f.close()
        nodes=d['nodes']
    #edges=d['edges']

        for n in nodes:
            if n[1]['category']=='ports':
                bw=int(n[1]['bitwidth'])
                if bw not in bitwidth:
                    bitwidth.add(bw)
            if n[1]['category']=='nodes':
                op=n[1]['opcode']
                if op not in opcode:
                    opcode.add(op)

                bw=int(n[1]['bitwidth'])
                if bw not in bitwidth:
                    bitwidth.add(bw)

                c=int(n[1]['m_clusterGroupNumber'])
                if c not in cluster:
                    cluster.add(c)
                topo=int(n[1]['m_topoIndex'])
                if topo not in topo_index:
                    topo_index.add(topo)
    return bitwidth, opcode, cluster, topo_index


