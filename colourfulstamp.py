for _ in range(int(input())):
    n = map(int, input().split())
    l = input().split("W")
    flag = 1
    for i in l:
        r = "R" in i
        b = "B" in i
        if (r == False and b == True) or (r == True and b == False):
            flag = 0
    print("YES" if flag else "NO")