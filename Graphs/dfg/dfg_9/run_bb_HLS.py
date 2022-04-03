from utility import *

top_func_name = 'fn1'
dic = './'

for idx in range(49, 50):
    case_name = 'dfg_' + str(idx)
    ret = run_HLS_synthesis(top_func_name, dic, case_name, True)
    if ret == -1:
        print("============= CASE %d FAILED FOR HLS =============" % idx)
        continue
