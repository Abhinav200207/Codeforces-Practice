n,k,x = map(int, input().split())
l = list(map(int, input().split()))
l.sort()
print(l)
count = 1
for i in range(n - 1):
    if l[i+1] - l[i] > x and l[i+1] - l[i] <= (k+1)*x:
        k = k - ((l[i+1] - l[i])/x)
        continue
    if l[i+1] - l[i] > (k+1)*x:
        count += 1
        continue
    if l[i+1] - l[i] > x and k <= 0:
        count += 1
print(count)