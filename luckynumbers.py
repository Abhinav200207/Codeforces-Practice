def fun(n):
    maxi = 0
    mini = 10
    while n > 0:
        maxi = max(maxi, n % 10)
        mini = min(mini, n % 10)
        n = n//10
    return maxi - mini


li = []
for i in range(0, 1000001):
    li.append(fun(i))

for _ in range(int(input())):
    l, r = map(int, input().split())

    ans = l
    maxi = li[l]

    for i in range(l + 1, r+1):
        x = li[i]
        if (x > maxi):
            maxi = x
            ans = i
        if (x == 9):
            break
    print(ans)