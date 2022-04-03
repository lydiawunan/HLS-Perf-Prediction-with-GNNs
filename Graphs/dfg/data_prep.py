from data_prep_util import *
import pandas as pd

dic='dfg_'
filename='dfg_'
save_dir='DFG/'

folder_num=112
case_num=200

graph_index=0
graph_mapping_list=[]

DSP=[]
LUT=[]
CP=[]
FF=[]
#SLICE=[]
#BRAM=[]

num_node_list=[]
num_edge_list=[]

for i in range(0,folder_num):
    folder_name=dic+str(i)+'/'
    print(folder_name)
    for j in range(case_num):
        ### check if the real perf/adb file exists
        if not path.exists(folder_name+filename+str(j)+'_HLS_Real_Perf.json'):
            continue
        if not path.exists(folder_name+filename+str(j)+'_fn1.adb'):
            continue

        ### check if all zeros in real performance
        is_zero=check_zero(folder_name+filename+str(j)+'_HLS_Real_Perf')
        if is_zero==1:
            continue
        else:
            ### parse the graph, and save as a json
            adb_file=folder_name+filename+str(j)+'_fn1.adb'
            g = parse_xml_into_graph_single(adb_file)
            json_save(g,save_dir+'graph_'+str(graph_index))
            graph_mapping_list.append(folder_name+filename+str(j))
            ### get the number of nodes/edges in each graph
            nodes=len(g.nodes)
            edges=len(g.edges)
            num_node_list.append(nodes)
            num_edge_list.append(edges)
            
            ### get the real perf
            dsp, lut, cp, ff, Slice, bram=get_real_perf(folder_name+filename+str(j)+'_HLS_Real_Perf')
            DSP.append(dsp)
            LUT.append(lut/1000)
            CP.append(cp)
            FF.append(ff/1000)
            #SLICE.append(Slice/200)
            #BRAM.append(bram)

            graph_index=graph_index+1

print(graph_index)
mapping=pd.DataFrame({'orignal code':graph_mapping_list,'DSP':DSP,'LUT':LUT,'CP':CP,'FF':FF})
NODE=pd.DataFrame(num_node_list)
EDGE=pd.DataFrame(num_edge_list)

graph_label_dsp=pd.DataFrame(DSP)
graph_label_lut=pd.DataFrame(LUT)
graph_label_cp=pd.DataFrame(CP)
graph_label_ff=pd.DataFrame(FF)
#graph_label_slice=pd.DataFrame(SLICE)
#graph_label_bram=pd.DataFrame(BRAM)

mapping.to_csv(save_dir+'mapping.csv',index=False)
NODE.to_csv(save_dir+'num-node-list.csv',index=False,header=False)
EDGE.to_csv(save_dir+'num-edge-list.csv',index=False,header=False)
graph_label_dsp.to_csv(save_dir+'graph-label-dsp.csv',index=False,header=False)
graph_label_lut.to_csv(save_dir+'graph-label-lut.csv',index=False,header=False)
graph_label_cp.to_csv(save_dir+'graph-label-cp.csv',index=False,header=False)
graph_label_ff.to_csv(save_dir+'graph-label-ff.csv',index=False,header=False)
#graph_label_slice.to_csv('graph-label-slice.csv',index=False,header=False)
#graph_label_bram.to_csv('graph-label-bram.csv',index=False,header=False)           
