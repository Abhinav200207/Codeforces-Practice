for _ in range(int(input())):
    n, x = map(int, input().split())
    x = int(x)
    n = int(n)
    l = list(map(int, input().split()))
    l.sort()
    sumnum = sum(l)
    ans = 0
    day = 0
    while (n > 0):
        # print("sumnum =", sumnum, "n =", n, "day =", day, "ans =", ans)
        while (sumnum > x):
            sumnum = sumnum - (l[n-1] + day)
            n = n - 1
        ans += n
        sumnum += n
        day += 1
    print(ans)
    
    
# 3 x = 7
# 
# sumnum = 5, n = 3, day = 0, ans = 0
# sumnum = 8, n = 3, day = 1, ans = 3
# sumnum = 7, n = 2, day = 2, ans = 5
# sumnum = 9, n = 2, day = 3, ans = 7
# sumnum = 4, n = 1, day = 4, ans = 8
# sumnum = 5, n = 1, day = 5, ans = 9
# sumnum = 6, n = 1, day = 6, ans = 10
# sumnum = 7, n = 1, day = 7, ans = 11