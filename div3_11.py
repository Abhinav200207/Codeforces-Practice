for _ in range(int(input())):
    n = int(input())
    if (n == 3):
        print(-1)
        continue
    if (n == 5):
        l = [5, 4, 1, 2, 3]
        print(*l)
        continue
    if (n % 2 == 0):
        l = [i for i in range(n, 0, -1)]
        print(*l)
    else:
        l = [i for i in range(n, 0, -1)]
        temp = l[int(n/2)]
        l[int(n/2)] = l[int(n/2) + 1]
        l[int(n/2) + 1] = temp
        print(*l)