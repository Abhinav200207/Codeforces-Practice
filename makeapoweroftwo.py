

for _ in range(int(input())):
    s1 = input()
    ans = 1000000000000000
    for k in range(60):
        s2 = str(1 << k)
        i, j, cnt = 0, 0, 0

        while (i < len(s1) and j < len(s2)):
            if (s1[i] != s2[j]):
                cnt += 1
                i += 1
            elif (s1[i] == s2[j]):
                i += 1
                j += 1
        
        if (i < len(s1)):
            cnt += len(s1) - i
        if (j < len(s2)):
            cnt += len(s2) - j
        ans = min(ans,cnt)
    print(ans)