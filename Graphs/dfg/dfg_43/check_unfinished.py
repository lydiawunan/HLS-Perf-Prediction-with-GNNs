from os import path
for i in range(0, 200):
	if not path.exists('./dfg_%d_HLS_Real_Perf.json' % i):
		print(i, end=', ')
print('')
