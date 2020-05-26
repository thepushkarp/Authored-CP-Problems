t = int(input())
for _ in range(t):
	p, d = map(int, input().split())
	d = p - d
	d2 = d//2
	d4 = d//4
	count = d2*(d4 + 1) - d4*d4 + 1
	print(count)
