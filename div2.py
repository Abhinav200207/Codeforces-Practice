for _ in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))
    if n % 2:
        print("Mike")
    else:
        minnum = min(l)
        for i in range(n):
            if (l[i] == minnum):
                minnum = i
                break
        if (minnum % 2 == 1):
            print("Mike")
        else:
            print("Joe")
