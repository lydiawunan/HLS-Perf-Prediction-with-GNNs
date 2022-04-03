from utility import *

top_func_name = 'fn1'
dic = 'bb_f1/'

for idx in range(0, 200):
    case_name = 'bb_f1_' + str(idx)
    ret = run_HLS_synthesis(top_func_name, dic, case_name, True)
    if ret == -1:
        print("============= CASE %d FAILED FOR HLS =============" % idx)
        continue
