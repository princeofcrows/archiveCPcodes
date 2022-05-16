t1,t2,n = raw_input().split(" ")
t1 = int(t1)
t2 = int(t2)
n = int(n)
i = 1
while i<=(n-2):
	temp = t2**2+t1
	t1 = t2
	t2 = temp
	i = i+1
print(t2)
	
