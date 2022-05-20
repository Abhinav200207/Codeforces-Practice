import sys
input = lambda: sys.stdin.readline().rstrip("\r\n")
 
for t in range(int(input())):
    n, m = map(int, input().split())
    print(*sorted(max(x, n-1-x) + max(y, m-1-y) for x in range(n) for y in range(m)))