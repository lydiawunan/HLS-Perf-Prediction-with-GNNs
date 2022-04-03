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
    
    print('Total cycles: %d' % len(cycle_set))
    for cyc in cycle_set:
        print(len(cyc))
        cycles.append(cyc)
    
    edge_color_param = {}
    edge_width_param = {}
    for e in G.edges():
        u = e[0]
        v = e[1]

        u_name = G.nodes[u]['node_name']
        if 'opcode' in G.nodes[u]:
            u_opcode = G.nodes[u]['opcode']
        elif 'category' in G.nodes[u]:
            u_opcode = G.nodes[u]['category']
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
    

    params = {'label_color': 'black', 'width': 1200, 'height': 1200, 'node_color': node_color_param, 'edge_color': edge_color_param, 'edge_width': edge_width_param}
    pp.visualisation.plot(g, **params)
    print(html_name)
    print(g)
    pp.visualisation.export_html(g, filename = html_name, **params)



g = parse_xml_into_graph_single('top_cdfg', './top_cdfg.adb')
plot_html(g, 'top_cdfg.html')