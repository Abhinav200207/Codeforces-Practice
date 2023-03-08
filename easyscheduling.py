import math
import bisect
x = 0
l = []

while (x < 20):
    l.append(int(math.pow(2,x)))
    x += 1

prefix = [1]
for i in range(1,20):
    prefix.append(prefix[i - 1] + l[i])

# print(l,prefix)

for _ in range(int(input())):
    n,k = map(int, input().split())
    if (k == 1):
        print(int(math.pow(2,n) - 1))
        continue
    idx = bisect.bisect_left(l, k)
    remainings = int(math.pow(2,n) - 1) - prefix[idx - 1] - k

    ans = idx + 1 + math.ceil(remainings/k)
    print(ans)
