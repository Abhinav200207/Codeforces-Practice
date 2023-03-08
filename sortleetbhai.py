for _ in range(int(input())):
    n,w,h = map(int, input().split())
    c = list(map(int, input().split()))
    d = list(map(int, input().split()))

    c.sort()
    d.sort()

    # c = [i - w for i in c]
    # d = [i - h for i in d]

    x = [d[i] - c[i] for i in range(n)]

    if (max(x) - min(x) <= 2*(w-h)):
        print("YES")
    else:
        print("NO")