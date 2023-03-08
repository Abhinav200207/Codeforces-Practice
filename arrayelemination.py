for _ in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))

    l = [str(bin(i))[2:] for i in l]
    # print(l)
    x = [0]*64
    for i in range(n):
        y = 0
        for j in range(len(l[i]) - 1,-1,-1):
            x[y] += int(l[i][j])
            y += 1


    ans = []
    for i in range(1,n + 1):
        flag = 1
        for j in range(0,64):
            if (x[j]%i != 0):
                flag = 0
        if (flag):
            ans.append(i)
    print(*ans)