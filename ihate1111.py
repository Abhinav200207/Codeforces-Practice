def canSum(n, l = [11,111],m = {}):
    if (n in m):
        return m[n]
    if (n == 0):
        return True
    if (n < 0):
        return False
    for i in l:
        if canSum(n-i, l,m) == True:
            m[n] = True
            return True
    m[n] = False
    return False

for _ in range(int(input())):
    n = int(input())
    if (n > 1099):
        print("YES")
        continue
    print("YES" if canSum(n) else "NO")