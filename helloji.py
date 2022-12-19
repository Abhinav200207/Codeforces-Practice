def maxi(l):
    m = -1
    for i in l:
        m = max(m,i)
    return m

for _ in range(int(input())):
    n = int(input())
    s = input()

    res = 0

    for i in range(0,n):
        d = {}
        d = 0
        for j in range(i,min(i + 100,n)):
            c = int(s[j])
            d[c] += 1
            if (maxi(d)) <= len(d):
                res += 1
    print(res)
