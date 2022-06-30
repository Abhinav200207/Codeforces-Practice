n, q = map(int, input().split())
drow = [0]*(n+1)
dcolumn = [0]*(n+1)
for _ in range(q):
    l = list(map(int, input().split()))
    if (l[0] == 1):
        drow[l[1]] += 1
        dcolumn[l[2]] += 1

    if (l[0] == 2):
        drow[l[1]] -= 1
        dcolumn[l[2]] -= 1

    if (l[0] == 3):
        r = 1
        c = 1
        for i in range(l[1], l[3] + 1):
            if (drow[i] == 0):
                r = 0
                break
        for i in range(l[2], l[4] + 1):
            if (dcolumn[i] == 0):
                c = 0
                break
        print("YES" if (r or c) else "NO")

# 8 10
# 1 2 4
# 3 6 2 7 2
# 1 3 2
# 3 6 2 7 2
# 1 4 3
# 3 2 6 4 8
# 2 4 3
# 3 2 6 4 8
# 1 4 8
# 3 2 6 4 8