for _ in range(int(input())):
    n = int(input())
    if (n == 2):
        print("1 3")
        print("4 2")
        continue
    arr = [0]*(n*n)
    for i in range(n*n):
        arr[i] = (i + 1)
    l, r = 0, n * n - 1
    flag = 1
    ans = []
    for i in range(n):
        v = []
        for j in range(n):
            if (flag):
                v.append(arr[l])
                l += 1
                flag = 0
            else:
                v.append(arr[r])
                r -= 1
                flag = 1
        ans.append(v)
    if (n % 2 == 0):
        for i in range(1, n, 2):
            ans[i] = ans[i][::-1]
    
    for i in range(n):
        for j in range(n):
            print(ans[i][j],end = " ")
        print()