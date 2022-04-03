import xml.etree.cElementTree as et
import networkx as nx
import matplotlib.pyplot as plt
import json
import subprocess
import time
from os import path
import glob


def parse_xml_into_graph_single(func_name, xml_file):
    #prefix = func_name + '_'
    prefix = ''
    G = nx.DiGraph()
    parser = et.parse(xml_file)
    root = parser.getroot()
    cdfg = root.findall('*/cdfg')[0]

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
                    G.nodes[node_name]['category']='ret'
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

    # edge_list = list(G.edges)
    # print(edge_list)
    # node_list = list(G.nodes)
    # print(node_list)

    return G


def parse_xml_into_graph(dic):
    ## find all .adb files
    all_sub_dfgs = []
    for adb_file in glob.glob(dic + '*.adb'):
        print("Processing " + adb_file)
        case_name = adb_file.replace(dic, '').replace('.adb', '').replace('./', '')
        g = parse_xml_into_graph_single(case_name, adb_file)
        g.graph['graph_name'] = case_name
        all_sub_dfgs.append(g)
        json_save(g, dic + case_name + '_graph')

    # ## merge the .adb files together
    # if(len(all_sub_dfgs) <= 1):
    #     return

    # f = open(dic + case_name + '_merged_graph.json', 'w')
    # node_list = []
    # edge_list = []

    # for g in all_sub_dfgs:
    #     for n in g.nodes():
    #         node_list.append([n, g.nodes[n]])
    #     for e in g.edges():
    #         edge_list.append((e[0], e[1], g.edges[e]))
    
    # G_dict = dict(nodes=node_list, edges=edge_list)
    # json.dump(G_dict, f)
    # f.close()


### plot the graph and save to .png
def plot_graph(G):
    color_map = ['#FFBE0B', '#FB5607', '#FF006E', '#8338EC', '#3A86FF']
    colors = []        
    for n in G.nodes():
        if G.nodes[n]['category'] == 'ret' or ('opcode' in G.nodes[n] and G.nodes[n]['opcode'] == 'ret'):
            colors.append(color_map[4])
        elif G.nodes[n]['category'] == 'ports':
            colors.append(color_map[3])
        elif G.nodes[n]['category'] == 'blocks':
            colors.append(color_map[2])
        elif G.nodes[n]['category'] == 'consts':
            colors.append(color_map[1])
        elif G.nodes[n]['category'] == 'nodes':
            colors.append(color_map[0])

    nx.draw(G, with_labels = True, node_color = colors)
    #plt.savefig(case_name + '.png', format='PNG')


### save the graph into json
def json_save(G, fname):
    f = open(fname + '.json', 'w')
    G_dict = dict(nodes=[[n, G.nodes[n]] for n in G.nodes()], \
                  edges=[(e[0], e[1], G.edges[e]) for e in G.edges()])
    json.dump(G_dict, f)
    f.close()

### load the graph from json
def json_load(fname):
    f = open(fname + '.json', 'r')
    G = nx.DiGraph()
    d = json.load(f)
    f.close()
    G.add_nodes_from(d['nodes'])
    G.add_edges_from(d['edges'])
    return G


### run HLS synthesis
def run_HLS_synthesis(top_func_name, dic, case_name, impl = False):
    c_file_name = dic + case_name + '.c'
    c = '#' if impl == False else ''
    script_name = 'script.tcl'
    script_content = """
open_project project_tmp
set_top %s
add_files %s
open_solution "solution_tmp"
#set_part {xc7z020clg484-1}
set_part {xc7vx690tffg1761-2}
create_clock -period 10 -name default
#source "./directive.tcl"
csynth_design
%sexport_design -evaluate verilog -format ip_catalog
exit
    """ % (top_func_name, c_file_name, c)
    f = open(script_name, 'w')
    f.write(script_content)
    f.close()

    # p = subprocess.Popen(['rm', '-rf', 'project_tmp'], stderr=subprocess.STDOUT)
    # p = subprocess.Popen(['vitis_hls', '-f', script_name], stderr=subprocess.STDOUT)
    # t = 0
    # while( t < 2000 ):
    #     time.sleep(5)
    #     if p.poll() != None:
    #         break
    #     t = t + 1
        
    # if p.poll() == None:
    #     p.kill()

    ### collect the xml files for all the functions
    xml_file_path = 'project_tmp/solution_tmp/.autopilot/db/'
    xml_file = xml_file_path + ('%s.adb') % top_func_name
    if not path.exists(xml_file):
        print("========= SYNTHESIS FAILED ==========")
        return -1
    for adb_file in glob.glob(xml_file_path + '*.adb'):
        if 'sched' in adb_file or 'bind' in adb_file:
            continue
        print(adb_file)
        func_name = adb_file.replace(xml_file_path, '').replace('.adb', '')
        print(func_name)
        p = subprocess.Popen(['cp', adb_file, './' + case_name + '_' + func_name + '.adb'], stderr=subprocess.STDOUT)

    ### collect the implementation results
    syn_rpt_name = 'project_tmp/solution_tmp/syn/report/%s_csynth.xml' % top_func_name
    imp_rpt_name = 'project_tmp/solution_tmp/impl/report/verilog/%s_export.rpt' % top_func_name
    if not path.exists(imp_rpt_name):
        print("========= IMPLEMENTATION FAILED ==========")
        return -1

    f_rpt = open(syn_rpt_name, 'r')
    LAT = 0
    parser = et.parse(syn_rpt_name)
    root = parser.getroot()
    for ele in root.iter():
        if ele.tag == 'Average-caseLatency':
            LAT = int(ele.text)

    f_rpt = open(imp_rpt_name, 'r')
    SLICE = LUT = FF = DSP = CP = 0
    for line in f_rpt.readlines():
            res = [i for i in line.split() if i.isdigit()]
            if line.startswith('SLICE'):
                    SLICE = int(res[0])
            elif line.startswith('LUT'):
                    LUT = int(res[0])
            elif line.startswith('FF'):
                    FF = int(res[0])
            elif line.startswith('DSP'):
                    DSP = int(res[0])
            elif line.startswith('CP achieved'):
                    res = [i for i in line.split()]
                    if res[3] == 'NA':
                        CP = float(0.0)
                    else:
                        CP = float(res[3])
    print(LAT, SLICE, LUT, FF, DSP, CP)

    HLS_data_file = open(dic + case_name + '_HLS_Real_Perf.json', 'w')
    HLS_sol = {}
    HLS_sol['name'] = case_name
    HLS_sol['DSP'] = DSP
    HLS_sol['LAT'] = LAT
    HLS_sol['LUT'] = LUT
    HLS_sol['CP'] = CP
    HLS_sol['FF'] = FF
    HLS_sol['SLICE'] = SLICE
    json.dump(HLS_sol, HLS_data_file)
    HLS_data_file.close()
    return 0
