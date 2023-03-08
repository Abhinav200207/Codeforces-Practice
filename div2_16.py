for _ in range(int(input())):
    n, k = map(int, input().split())
    v = []
    for i in range(n):
        a, b = map(int, input().split())
        v.append((a, b))
    cnt = 0
    res = []
    for i in range(n):
        if v[i][0] <= k and k <= v[i][1]:
            res.append(v[i])
    temp = [0] * 51
    for i in range(1, 51):
        for ab in res:
            if ab[0] <= i and i <= ab[1]:
                temp[i] += 1
    flag = 1
    y = temp[k]
    for i in range(1, 51):
        if y <= temp[i] and k != i:
            flag = 0
    if flag:
        print("YES")
    else:
        print("NO")