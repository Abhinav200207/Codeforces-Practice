n = input()
if (len(n) == 1):
    if (int(n) % 4 == 0):
        print(4)
    else:
        print(0)
else:
    i = 0
    rem = 0
    flag = 1
    while (flag and i < len(n)):
        if (rem != 0):
            rem = int(rem*10 + int(n[i])) % 4
            i += 1
        else:
            if (int(n[i]) >= 4):
                rem = int(n[i]) % 4
                i += 1
            else:
                if (i + 1 < len(n)):
                    rem = int(n[i] + n[i + 1]) % 4
                    i += 2
                else:
                    rem = int(n[i]) % 4
                    flag = 0
                    i += 1
                    pass
    print(4 if (rem == 0) else 0)
