def check(a,b,s):
    c = ""
    if (int(a) < int(b)):
        a = (len(b)-len(a))*"0" + a
        for i in range(len(a)-1,-1,-1):
            c = str(int(a[i]) + int(b[i])) + c
    if (int(a) > int(b)):
        b = (len(a)-len(b))*"0" + b
        for i in range(len(a)-1,-1,-1):
            c = str(int(a[i]) + int(b[i])) + c
    
    if (c == s):
        return True
    return False

for t in range(int(input())):
    a, s = map(int, input().split())
    a = str(a)
    s = str(s)
    b = ""
    i = len(s) - 1
    j = len(a) - 1
    while(i >= 0 and j >= 0):
        if(int(s[i]) < int(a[j])):
            b = str(int(s[i-1] + s[i]) - int(a[j])) + b
            i = i - 2
        elif(int(s[i]) > int(a[j])):
            b = str(int(s[i]) - int(a[j])) + b
            i = i - 1
        else:
            b = "0" + b
            i = i - 1
        j = j - 1
    if (i>=0):
        b = s[0:i+1] + b
    # print(i,j)
    if (check(a,b,s)):
        print(int(b))
    else:
        print(-1)

# 6
# 17236 1106911
# 1 5
# 108 112
# 12345 1023412
# 1 11
# 1 20
