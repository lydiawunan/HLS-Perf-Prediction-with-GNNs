import numpy as np
import csv

name = [
    'node-level/realnodes_pred_gcn_0.451.npy',
    'node-level/realnodes_pred_gin_0.468.npy',
    'node-level/realnodes_pred_rgcn_0.640.npy',
    'node-level/realnodes_pred_sage_0.623.npy',
    'node-level/realnodes_label.npy'
]

for i in name:
    new_name = i.replace('.npy', '.csv')
    temp = np.load(i)
    np.savetxt(new_name, temp, delimiter=',')
