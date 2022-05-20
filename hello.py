input_string = input()
l = input_string.split()
s = l[0]
n = l[1]

lmain =[]
for i in range(n):
    input_string = input()
    lse = input_string.split()
    ltemp = []
    ltemp.append(lse[0])
    ltemp.append(lse[1])
    lmain.append(ltemp)

def minutil(l):
    minnum = l[0][0]
    ans = 0
    for i in range(len(l)):
        if (l[i][0] < minnum):
            ans = i
    return i

def slove(s,n,l):
    for i in range(n):
        i = minutil(l)
        s += l[i][1]
        l.pop(i)
