import math
for _ in range(int(input())):
    n, k = map(int, input().split())
    l = list(map(int, input().split()))
    ok = 0
    cnt = 0
    tmp = 1
    for i in range(n):
        if(l[i] == tmp):
            cnt += 1
            tmp += 1
    res = n-cnt
    print(int((res+k-1)/k))


