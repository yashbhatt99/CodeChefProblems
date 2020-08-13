import math as m 

t = int(input())
for i in range(t):
	c,r = map(int,input().split())
	c = m.ceil(c/9)
	r = m.ceil(r/9)

	if r<=c:
		print(1,r)
	else:
		print(0,c)
