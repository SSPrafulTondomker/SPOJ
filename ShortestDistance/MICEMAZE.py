import Queue
#from collections import deque
from Queue import *
n = input()
e = input()
t = input()
m = input()
a, c, v ,b , tm= [], [], [], [], []
q = Queue()
d = []
er = []
s = 0
for i in range (n+1) :
	b.append(0)
	er.append(100000)

for i in range (n+1) :
	a.append([])
	v.append(0)
	tm.append(0)
	c.append(b)
#print c
for _ in range (m) :
	x, y, z = map(int, raw_input().split())
	a[x].append(y)
	c[x][y] = z

for j in range (1,n+1) :
	q.put(j)
	d = []
	for k in range (n+1) :
		d.append(100000)
	d[j] = 0
	while not q.empty() :
		x = q.get()
		v[x] = 1
	#print q.size()	
		
		for i in a[x] :
			if d[i] > d[x] + c[x][i] :
				d[i] = d[x] + c[x][i]
				q.put(i)
	if d[e] <= t :
		s += 1
	#print d

print s
