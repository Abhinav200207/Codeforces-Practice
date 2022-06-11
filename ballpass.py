for _ in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))
    sumnum = sum(l)
    maxnum = max(l)
    if sumnum == 0 and maxnum == 0:
        print(0)
        continue
    if 2*maxnum <= sumnum:
        print(1)
    else:
        print(2*maxnum - sumnum)