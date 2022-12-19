for _ in range(1):
    n, k, x = map(int, input().split())
    a = list(map(int, input().split()))
    a.sort()
    count = 0
    dif = []
    for i in range(1, n):
        if (a[i]-a[i-1]) > x:
            count += 1
            dif.append(a[i]-a[i-1])
    dif.sort()
    ans = count+1
    # print(count,dif)
    for i in dif:
        if k > 0:
            temp = i//x
            if i % x == 0:
                temp -= 1
            if temp <= k:
                k -= temp
                ans -= 1
        else:
            break
    print(ans)
