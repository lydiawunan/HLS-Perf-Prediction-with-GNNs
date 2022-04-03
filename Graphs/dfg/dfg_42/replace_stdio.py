
for i in range(0, 200):
	name = 'dfg_%d.c' % i
	f = open(name, 'r')
	a = f.read()
	b = a.replace('#include <stdio.h>', '//#include <stdio.h>')
	f.close()

	f = open(name, 'w')
	f.write(b)
	f.close()
