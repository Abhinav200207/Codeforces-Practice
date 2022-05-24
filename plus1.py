def minimumLines(sp):
    n = len(sp)
    if (n <= 2):
        return 1
    sp.sort()
    cnt = 1
    slope = (sp[1][1] - sp[0][1])/(sp[1][0] - sp[0][0])
    for i in range(1, n):
        slopetemp = (sp[i][1] - sp[i - 1][1])/(sp[i][0] - sp[i - 1][0])
        if (slopetemp != slope):
            slope = slopetemp
            cnt += 1
    return cnt

minimumLines([[1,7],[2,6],[3,5],[4,4],[5,4],[6,3],[7,2],[8,1]])