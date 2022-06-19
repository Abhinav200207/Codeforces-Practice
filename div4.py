def isPalindrome(ov):
    f = str(int(ov/60))
    l = str(int(ov % 60))
    if (len(f) == 1):
        f = "0" + f
    if (len(l) == 1):
        l = "0" + l
    if f[::-1] == l:
        return True
    else:
        return False


for _ in range(int(input())):
    t, j = map(str, input().split())
    f = t[:2]
    l = t[3:]
    f = int(f)*60
    l = int(l)
    ov = f + l
    flag = 0
    cnt = 0
    while(True):
        if (ov == f + l and flag):
            break
        if isPalindrome(ov):
            cnt += 1
        ov = (ov+int(j)) % (24*60)
        flag = 1
    print(cnt)
