n = int(input())
l = list(map(int, input().split()))
l.sort()
count = 0
index = 1
for i in range(n):
    if (l[i] >= index):
        index += 1
        count += 1
print(count)