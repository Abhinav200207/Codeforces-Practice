for _ in range(int(input())):
    n = int(input())
    s = input()
    if n % 2 == 0:
        cnt = 0
        for i in range(n):
            if int(n/2) == i or int(n/2) - 1 == i:
                cnt += 1
            elif (i < int(n/2) - 1):
                if (s[i + 1] == s[n - i - 1]):
                    cnt += 1
            else:
                if (s[i - 1] == s[n - i - 1]):
                    cnt += 1
        print(cnt)

    else:
        cnt = 0
        for i in range(n):
            if int(n/2) == i:
                cnt += 1
            elif (i < int(n/2)):
                if (s[i + 1] == s[n - i - 1]):
                    cnt += 1
            else:
                if (s[i - 1] == s[n - i - 1]):
                    cnt += 1
        print(cnt)
