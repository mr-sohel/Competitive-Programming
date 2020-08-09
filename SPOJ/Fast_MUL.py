t = int(input())
while(True):
	x, y = map(int, input().split())
	print(x*y)
	t = t - 1
	if(t == 0):
		break;
