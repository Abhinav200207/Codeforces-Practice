def power(x,y):
	temp = 0
	if( y == 0):
		return 1
	temp = power(x, int(y / 2))
	if (y % 2 == 0):
		return temp * temp
	else:
		return x * temp * temp

for _ in range(int(input())):
	n = int(input())
	if (n > 19):
		print("NO")
	else:
		print("YES")
		for i in range(n):
			print(power(3, i),end=" ")
		print()