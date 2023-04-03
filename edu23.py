for _ in range(int(input())):
    s = input()
    n = len(s)
    cnt = 0
    for i in range(n - 1, -1, -1):
        if (s[i] == '0'):
            cnt += 1
        else:
            if (cnt == 1):
                pass
                # swap(s[i],s[i + 1])
            cnt = 1