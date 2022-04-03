from utility import *

top_func_name = 'fn1'
#dic = 'bb_f1/'

for dic in ['dfg_110/','dfg_111/','dfg_112/']:
    for idx in range(0, 200):
        case_name = 'dfg_' + str(idx)
        ret = run_HLS_synthesis(top_func_name, dic, case_name, True)
        if ret == -1:
            print("============= CASE %d FAILED FOR HLS =============" % idx)
            continue
