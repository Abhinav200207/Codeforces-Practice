for _ in range(int(input())):
    l = list(map(int, input().split()))
    s1 = input()
    s2 = input()
    index1 = 0
    index2 = 0
    x1 = l[2]
    x2 = l[2]
    ans = ""
    while (index1 < len(s1) and index2 < len(s2)):
        if x1 == 0:
            x1 = l[2]
            ans += s2[index2]
            index2 = index2 + 1
        if x1 != 0:
            ans += s1[index1]
            x2 = l[2]
            index1 = index1 + 1
            x1 = x1 - 1
        elif x2 != 0:
            ans += s2[index2]
            x1 = l[2]
            index2 = index2 + 1
            x2 = x2 - 1
    print(ans)