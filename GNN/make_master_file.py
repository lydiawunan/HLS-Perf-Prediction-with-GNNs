### script for writing meta information of datasets into master.csv
### for graph property prediction datasets.
import pandas as pd

dataset_list = []
dataset_dict = {}


names = ['dfg_cp','dfg_dsp','dfg_lut','dfg_ff',
    'cdfg_cp','cdfg_dsp','cdfg_lut','cdfg_ff',
    'dfg_cp_binary','dfg_dsp_binary','dfg_lut_binary','dfg_ff_binary',
    'dfg_cp_numerical','dfg_dsp_numerical','dfg_lut_numerical','dfg_ff_numerical',
    'cdfg_cp_binary','cdfg_dsp_binary','cdfg_lut_binary','cdfg_ff_binary',
    'cdfg_cp_numerical','cdfg_dsp_numerical','cdfg_lut_numerical','cdfg_ff_numerical', 
    'cdfg_cp_all_binary','cdfg_dsp_all_binary','cdfg_lut_all_binary','cdfg_ff_all_binary',
    'cdfg_cp_all_numerical','cdfg_dsp_all_numerical','cdfg_lut_all_numerical','cdfg_ff_all_numerical']

for name in names:
    dataset_dict[name] = {'eval metric': 'rmse'}
    dataset_dict[name]['download_name'] = name
    dataset_dict[name]['version'] = 1
    dataset_dict[name]['url'] = 'None'
    dataset_dict[name]['add_inverse_edge'] = False 
    dataset_dict[name]['split'] = 'scaffold'
    dataset_dict[name]['num tasks'] = 1
    dataset_dict[name]['has_node_attr'] = True
    dataset_dict[name]['has_edge_attr'] = True
    dataset_dict[name]['task type'] = 'regression'
    dataset_dict[name]['num classes'] = -1
    dataset_dict[name]['additional node files'] = 'None'
    dataset_dict[name]['additional edge files'] = 'None'
    dataset_dict[name]['binary'] = False


df = pd.DataFrame(dataset_dict)
# saving the dataframe 
df.to_csv('master.csv')