import xml.etree.cElementTree as et
import networkx as nx
import matplotlib.pyplot as plt
import json
import subprocess
import time
from os import path
import glob
import re
import csv

res_considered = ['FF', 'LUT', 'DSP']
FF_range = {'min': 100000, 'max': -1}
LUT_range = {'min': 100000, 'max': -1}
DSP_range = {'min': 100000, 'max': -1}

FF_num_list = []
LUT_num_list = []
DSP_num_list = []
node_num_list = []


def parse_xml_into_graph_single(func_name, xml_file):
    node_has_rtl = {'total': 0, 'has': 0}

    #prefix = func_name + '_'
    prefix = ''
    G = nx.DiGraph()
    parser = et.parse(xml_file)
    root = parser.getroot()
    cdfg = root.findall('*/cdfg')[0]

    # rtl hash table
    rtl_res_table = get_rtl_hash_table(root)

    # find edges and build the graph
    print("Adding Edges")
    edge_id_max = -1
    for edges in cdfg.iter('edges'):
        for edge in edges.iter('item'):
            source = edge.find('source_obj').text
            sink = edge.find('sink_obj').text
            edge_id = edge.find('id').text
            edge_id_max = max(int(edge_id), edge_id_max)
            is_back_edge = edge.find('is_back_edge').text
            edge_type = edge.find('edge_type').text
            G.add_edges_from([(prefix + source, prefix + sink, {
                             'edge_name': prefix + edge_id, 'is_back_edge': is_back_edge, 'edge_type': edge_type})])

    # add node attributes
    print("Adding Nodes")
    for nodes in cdfg.iter('nodes'):
        for node in nodes.findall('item'):
            node_id = node.findall('*/*/id')[0].text
            node_name = prefix + node_id

            if node_name not in G.nodes():
                print('Node %s (type: nodes) not in the graph' % node_name)
                op_code = node.findall('opcode')[0].text
                if op_code == 'ret':
                    G.add_node(node_name)
                    G.nodes[node_name]['node_name'] = node_name
                    G.nodes[node_name]['category'] = 'ret'
                continue
            # total nodes number +1
            node_has_rtl['total'] += 1

            G.nodes[node_name]['node_name'] = node_name
            G.nodes[node_name]['category'] = 'nodes'
            G.nodes[node_name]['bitwidth'] = node.findall('*/bitwidth')[0].text
            G.nodes[node_name]['opcode'] = node.findall('opcode')[0].text
            G.nodes[node_name]['m_Display'] = node.findall('m_Display')[0].text
            G.nodes[node_name]['m_isOnCriticalPath'] = node.findall('m_isOnCriticalPath')[
                0].text
            G.nodes[node_name]['m_isStartOfPath'] = node.findall('m_isStartOfPath')[
                0].text
            G.nodes[node_name]['m_delay'] = node.findall('m_delay')[0].text
            G.nodes[node_name]['m_topoIndex'] = node.findall('m_topoIndex')[
                0].text
            G.nodes[node_name]['m_isLCDNode'] = node.findall('m_isLCDNode')[
                0].text
            G.nodes[node_name]['m_clusterGroupNumber'] = node.findall(
                'm_clusterGroupNumber')[0].text
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
                    node_has_rtl['has'] += 1
                    # print(t_rtlname, '+++++++++++', rtl_res_table[t_rtlname])
                    res_name = rtl_res_table[t_rtlname].keys()
                    for i in res_name:
                        # rewrite the initial number with the actual number
                        # this is regression way:
                        G.nodes[node_name][i] = '1'
                        # this is binary classification way:
                        # G.nodes[node_name][i] = '1'
                        # tnum=int(G.nodes[node_name][i])
                        if i == 'FF':
                            FF_num_list.append('1')
                            # if tnum<FF_range['min']:
                            #     FF_range['min']=tnum
                            # if tnum>FF_range['max']:
                            #     FF_range['max']=tnum
                        elif i == 'LUT':
                            LUT_num_list.append('1')
                            # if tnum<LUT_range['min']:
                            #     LUT_range['min']=tnum
                            # if tnum>LUT_range['max']:
                            #     LUT_range['max']=tnum
                        else:
                            DSP_num_list.append('1')
                        # if i=='FF':
                        #     FF_num_list.append('1')
                            # if tnum<FF_range['min']:
                            #     FF_range['min']=tnum
                            # if tnum>FF_range['max']:
                            #     FF_range['max']=tnum
                        # elif i=='LUT':
                        #     LUT_num_list.append('1')
                            # if tnum<LUT_range['min']:
                            #     LUT_range['min']=tnum
                            # if tnum>LUT_range['max']:
                            #     LUT_range['max']=tnum
                        # else:
                        #     DSP_num_list.append('1')
                            # if tnum<DSP_range['min']:
                            #     DSP_range['min']=tnum
                            # if tnum>DSP_range['max']:
                            #     DSP_range['max']=tnum

    # blocks are for control signals
    for nodes in cdfg.iter('blocks'):
        for node in nodes.findall('item'):
            node_id = node.findall('*/id')[0].text
            node_name = prefix + node_id

            if node_name not in G.nodes():
                print('Node %s (type: blocks) not in the graph' % node_name)
                continue
            G.nodes[node_name]['node_name'] = node_name
            G.nodes[node_name]['category'] = 'blocks'
            G.nodes[node_name]['type'] = node.findall('*/type')[0].text

    # ports are function arguments
    for nodes in cdfg.iter('ports'):
        for node in nodes.findall('item'):
            node_id = node.findall('*/*/id')[0].text
            node_name = prefix + node_id

            if node_name not in G.nodes():
                print('Node %s (type: ports) not in the graph' % node_name)
                continue
            G.nodes[node_name]['node_name'] = node_name
            G.nodes[node_name]['category'] = 'ports'
            G.nodes[node_name]['type'] = node.findall('*/*/type')[0].text
            G.nodes[node_name]['bitwidth'] = node.findall('*/bitwidth')[0].text
            G.nodes[node_name]['direction'] = node.findall('direction')[0].text
            G.nodes[node_name]['if_type'] = node.findall('if_type')[0].text
            G.nodes[node_name]['array_size'] = node.findall('array_size')[
                0].text

    # no need to keep consts as nodes in the graph
    # remove to reduce the graph size
    for nodes in cdfg.iter('consts'):
        for node in nodes.findall('item'):
            node_id = node.findall('*/*/id')[0].text
            node_name = prefix + node_id

            if node_name not in G.nodes():
                print('Node %s (type: consts) not in the graph' % node_name)
                continue
            for v in G.neighbors(node_name):
                G.nodes[v]['const'] = node_name
                G.nodes[v]['const-bitwidth'] = node.findall('*/bitwidth')[
                    0].text
            # remove the const node
            G.remove_node(node_name)
            #print("const node %s removed" % node_name)

    # edge_list = list(G.edges)
    # print(edge_list)
    # node_list = list(G.nodes)
    # print(node_list)

    node_num_list.append(node_has_rtl['has']/node_has_rtl['total'])

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


if __name__ == "__main__":
    import os
    # dir stores the test adb file
    dir = './dfgadbfile'
    # testfile=dir+'/cdfg_1_cdfg_4.adb'
    # parse_xml_into_graph_single(0, testfile)
    # for i in os.listdir(dir):
    #     testfile = './adbfile/{}'.format(i)
    #     print('parsing', i)
    #     parse_xml_into_graph_single(0, testfile)
    # print('FF_range',FF_range)
    # print('lut_range',LUT_range)
    # print('dsp_range',DSP_range)
    mapping_path = './dataset/dfg/mapping.csv'

    with open(mapping_path, 'r') as f:
        file_list = csv.reader(f)
        for i in file_list:
            name = i[0].replace('/', '_')
            path = './dfgadbfile/'+name+'.adb'
            try:
                parse_xml_into_graph_single(0, path)
            except BaseException:
                print('this file does not exist.')

    import json
    import numpy as np
    # nnl=json.dumps(node_num_list)
    fnl = np.array(FF_num_list)
    lnl = np.array(LUT_num_list)
    dnl = np.array(DSP_num_list)
    nnl = np.array(node_num_list)
    np.save('pre_process/dfg_ff_binary', fnl)
    np.save('pre_process/dfg_lut_binary', lnl)
    np.save('pre_process/dfg_dsp_binary', dnl)
    np.save('pre_process/dfg_node_binary', nnl)
