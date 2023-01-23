for _ in range(int(input())):
    n = int(input())
    grid = []
    rayX = []
    rayY = []
    for i in range(n):
        rayX.append([0]*n)
        rayY.append([0]*n)
        grid.append(input())

    for j in range(n):
        flag = 1
        for i in range(n - 1,-1,-1):
            if (grid[i][j] == '#'):
                flag = 0
            rayY[i][j] = flag

    for i in range(n):
        flag = 1
        for j in range(n - 1,-1,-1):
            if (grid[i][j] == '#'):
                flag = 0
            rayX[i][j] = flag

    # print(rayX)
    # print(rayY)
    
    ans = 0
    for i in range(n):
        for j in range(n):
            if (rayX[i][j] and rayY[i][j]):
                ans += 1
    print(ans)