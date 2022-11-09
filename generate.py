for _ in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))
    # print(l, n)
    if (sum(l) % 2 == 1 or n % 2 == 1):
        print(-1)
    else:
        ans = []
        for i in range(1, n, 2):
            if (l[i] == l[i - 1]):
                ans.append([i, i + 1])
            else:
                ans.append([i, i])
                ans.append([i + 1, i + 1])
        print(len(ans))
        for i in ans:
            print(*i)
