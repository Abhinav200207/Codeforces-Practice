for _ in range(int(input())):
    a = str(input())
    n = len(a)
    if (n < 2):
        print("NO")
        continue
    n = int(n/2)
    if (a[:n] == a[n:]):
        print("YES")
    else:
        print("NO")

# 10
# a
# aa
# aaa
# aaaa
# abab
# abcabc
# abacaba
# xxyy
# xyyx
# xyxy
