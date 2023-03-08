for _ in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))

    k = 0

    for i in range(n):
        if (i+1 < n and l[i] == -1 and l[i+1] == -1):
            l[i] = 1
            l[i+1] = 1
            k += 1
            break

    if (k == 0):
        for i in range(n):
            if (i+1 < n and l[i] == -1 and l[i+1] == 1):
                l[i] = 1
                l[i+1] = -1
                k += 1
                break

    if (k == 0):
        for i in range(n):
            if (i+1 < n and l[i] == 1 and l[i+1] == -1):
                l[i] = -1
                l[i+1] = 1
                k += 1
                break

    if (k == 0):
        for i in range(n):
            if (i+1 < n and l[i] == 1 and l[i+1] == 1):
                l[i] = -1
                l[i+1] = -1
                k += 1
                break

    print(sum(l))
