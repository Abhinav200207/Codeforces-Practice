for _ in range(int(input())):
    s = input()
    c = input()
    if (c not in s):
        print("NO")
    else:
        l = []
        for i in range(len(s)):
            if (s[i] == c):
                l.append(i)
        for i in l:
            if(i % 2 == 0 and (len(s) - i - 1) % 2 == 0):
                print("YES")
                break
        else:
            print("NO")
