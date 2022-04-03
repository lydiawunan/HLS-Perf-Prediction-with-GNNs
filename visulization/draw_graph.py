from utility import *
import networkx as nx
import json
import pathpy as pp
from pathpy.classes.network import network_from_networkx

color_map = ['#EAAA00', '#FB5607', '#FF006E', '#8338EC', '#3A86FF', '#857437', '#FF0000']

def get_hashable_cycle(cycle):
    """cycle as a tuple in a deterministic order."""
    m = min(cycle)
    mi = cycle.index(m)
    mi_plus_1 = mi + 1 if mi < len(cycle) - 1 else 0

    #print(m, mi, mi_plus_1)

    if cycle[mi-1] > cycle[mi_plus_1]:
        result = cycle[mi:] + cycle[:mi]
    else:
        result = list(reversed(cycle[:mi_plus_1])) + list(reversed(cycle[mi_plus_1:]))
    return tuple(result)



def find_all_cycles(G):
    cycles = set()
    for n in G.nodes():
        cycle = []
        try:
            for ele in nx.find_cycle(G, source=n, orientation="original"):
                cycle.append((ele[0], ele[1]))
        except:
            pass
        if( len(cycle) > 0 ):
            cycles.add( get_hashable_cycle(cycle) )
    return cycles
    


def plot_html(G, html_name):
    g = pp.Network(directed=True)

    cycles = []

    cycle_set = find_all_cycles(G)

    case_name = html_name.split('/')[-1]
    case_name = case_name[:len(case_name)-5]
    all_loop_info[case_name] = {}
    all_loop_info[case_name]['total_loop'] = len(cycle_set)
    all_loop_info[case_name]['loop_length'] = []

    print('Total cycles: %d' % len(cycle_set))
    for cyc in cycle_set:
        print(len(cyc))
        cycles.append(cyc)
        all_loop_info[case_name]['loop_length'].append(len(cyc))
    


    edge_color_param = {}
    edge_width_param = {}
    for e in G.edges():
        u = e[0]
        v = e[1]

        u_name = G.nodes[u]['node_name']
        if 'opcode' in G.nodes[u]:
            u_opcode = G.nodes[u]['opcode']
        else:
            u_opcode = 'misc'

        v_name = G.nodes[v]['node_name']
        if 'opcode' in G.nodes[v]:
            v_opcode = G.nodes[v]['opcode']
        else:
            v_opcode = 'misc'

        u_new = u_name + '_' + u_opcode
        v_new = v_name + '_' + v_opcode

        e_new = (u_new, v_new)
        g.add_edge(u_new, v_new)
        
        g.nodes[u_new]['attr'] = G.nodes[u]
        g.nodes[v_new]['attr'] = G.nodes[v]

        for cyc in cycles:
            if (u, v) in cyc:
                edge_color_param[e_new] = color_map[6]
                edge_width_param[e_new] = 1.0

    
    node_color_param = {}
    for n in g.nodes:
        if g.nodes[n]['attr']['category'] == 'ret' or ('opcode' in g.nodes[n]['attr'] and g.nodes[n]['attr']['opcode'] == 'ret'):
            node_color_param[n] = color_map[4]
        elif g.nodes[n]['attr']['category'] == 'ports':
            node_color_param[n] = color_map[3]
        elif g.nodes[n]['attr']['category'] == 'blocks':
            node_color_param[n] = color_map[2]
        elif g.nodes[n]['attr']['category'] == 'consts':
            node_color_param[n] = color_map[1]
        elif g.nodes[n]['attr']['category'] == 'nodes':
            if g.nodes[n]['attr']['opcode'] in ['add', 'dadd', 'fadd', 'sub', 'dsub', 'fsub', 'mul', 'dmul', 'fmul', 'udiv', 'ddiv', 'fdiv', 'sdiv', 'urem', 'srem', 'frem', 'dexp', 'dsqrt']:
                node_color_param[n] = color_map[5]
            else:
                node_color_param[n] = color_map[0]
    

    params = {'label_color': '#ff0000', 'width': 1200, 'height': 1200, 'node_color': node_color_param, 'edge_color': edge_color_param, 'edge_width': edge_width_param}
    #pp.visualisation.plot(g, **params)
    print(html_name)
    print(g)
    #pp.visualisation.export_html(g, filename = html_name, **params)



def build_nx_graph_from_json(G_json):
    G = nx.DiGraph()

    nodes = []
    for n in G_json['nodes']:
        if len(n[1]) > 0:
            nodes.append(n)
            
    G.add_nodes_from(nodes)

    edges = []
    for e in G_json['edges']:
        u = e[0]
        v = e[1]
        if(u in G.nodes() and v in G.nodes()):
            edges.append(e)
            
    G.add_edges_from(edges)
    # for n in G.nodes():
    #     print(G.nodes[n])
    # for e in G.edges():
    #     print(G.edges[e])
    return G





# ## DFGs
# # fp = open('all_loop_info.json', 'r')
# # all_loop_info = json.load(fp)
# # fp.close()
# all_loop_info = {}

# print("======= DFGs =======")
# for i in range(0, 19120):
#     json_file_name = '../dfg/DFG/graph_%d.json' % (i)
#     html_file_name = './dfg_figures/dfg_%d.html' % (i)

#     fp = open(json_file_name, 'r')
#     G_json = json.load(fp)
#     fp.close()

#     G = build_nx_graph_from_json(G_json)
#     plot_html(G, html_file_name)

# fp = open('all_loop_info.json', 'w')
# json.dump(all_loop_info, fp)
# fp.close()


# # CDFGs
# fp = open('all_loop_info.json', 'r')
# all_loop_info = json.load(fp)
# fp.close()

# print("======= CDFGs =======")
# for i in range(0, 18570):
#     json_file_name = '../cdfg/CDFG/graph_%d.json' % (i)
#     html_file_name = './cdfg_figures/cdfg_%d.html' % (i)

#     fp = open(json_file_name, 'r')
#     G_json = json.load(fp)
#     fp.close()

#     G = build_nx_graph_from_json(G_json)
#     plot_html(G, html_file_name)

# fp = open('all_loop_info.json', 'w')
# json.dump(all_loop_info, fp)
# fp.close()


# ## Real Cases
# fp = open('all_loop_info.json', 'r')
# all_loop_info = json.load(fp)
# fp.close()

# print("======= Real Cases =======")
# bm_names = ['MachSuite', 'CHStone', 'PolyBench']
# #bm_names = ['CHStone']

# fn_names = {'MachSuite': ['aes256_encrypt_ecb', 'backprop', 'bbgemm', 'ellpack', 'fft', 'gemm_ncubed', 'kmp', 'md_grid', 'md_kernel', 'ms_mergesort', 'needwun', 'spmv', 'ss_sort', 'stencil', 'stencil3d', 'viterbi'], \
#             'CHStone': ['adpcm_main', 'aes_main', 'blowfish_main', 'float64_add', 'float64_div', 'float64_mul', 'Gsm_LPC_Analysis', 'local_sin', 'mips', 'sha_stream'], \
#             'PolyBench': ['kernel_2mm', 'kernel_3mm', 'kernel_adi', 'kernel_atax', 'kernel_bicg', 'kernel_cholesky', 'kernel_correlation', 'kernel_covariance', 'kernel_doitgen', 'kernel_durbin', 'kernel_dynprog', \
#                           'kernel_fdtd_2d', 'kernel_fdtd_apml', 'kernel_floyd_warshall', 'kernel_gemm', 'kernel_gemver', 'kernel_gesummv', 'kernel_gramschmidt', 'kernel_jacobi_1d_imper', 'kernel_jacobi_2d_imper', \
#                            'kernel_lu', 'kernel_ludcmp', 'kernel_mvt', 'kernel_reg_detect', 'kernel_seidel_2d', 'kernel_symm', 'kernel_syr2k', 'kernel_syrk', 'kernel_trisolv', 'kernel_trmm'] \
#             }

# for bm_name in bm_names:
#     for fn_name in fn_names[bm_name]:
#         json_file_name = '../dataset/%s/json/%s.json' % (bm_name, fn_name)
#         html_file_name = './%s_figures/%s.html' % (bm_name, fn_name)
#         fp = open(json_file_name, 'r')
#         G_json = json.load(fp)
#         fp.close()

#         G = build_nx_graph_from_json(G_json)
#         plot_html(G, html_file_name)

# fp = open('all_loop_info.json', 'w')
# json.dump(all_loop_info, fp)
# fp.close()


