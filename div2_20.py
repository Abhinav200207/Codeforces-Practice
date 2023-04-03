for _ in range(int(input())):
    n = int(input())
    s = input()

    s1 = ""
    s2 = ""

    # one
    d1 = {}
    s1 += '0'
    d1[s[0]] = '0'
    for i in range(1,len(s)):
        if (s[i] in d1):
            s1 += d1[s[i]]
        else:
            if (s1[i - 1] == '0'):
                s1 += '1'
                d1[s[i]] = '1'
            else:
                s1 += '0'
                d1[s[i]] = '0'
    
    flag1 = 1
    for i in range(1,len(s)):
        if (s1[i] == s1[i - 1]):
            flag1 = 0

    # print(s1,flag1)

    # two
    d2 = {}
    s2 += '1'
    d2[s[0]] = '1'
    for i in range(1,len(s)):
        if (s[i] in d2):
            s2 += d2[s[i]]
        else:
            if (s2[i - 1] == '0'):
                s2 += '1'
                d2[s[i]] = '1'
            else:
                s2 += '0'
                d2[s[i]] = '0'
    

    flag2 = 1
    for i in range(1,len(s)):
        if (s2[i] == s2[i - 1]):
            flag2 = 0

    # print(s2,flag2)
        
    if flag1 and flag2:
        print("YES")
    else:
        print("NO")