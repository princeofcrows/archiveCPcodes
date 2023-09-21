while 1:
	a = int(raw_input())
	if a == 0:
		break
	i = 2*a;
	ans = 1
	while i>=a+2:
		ans *= i
		i = i - 1
	print(ans) 
