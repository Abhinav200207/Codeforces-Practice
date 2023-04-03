for _ in range(int(input())):
    n = int(input())
    l = []
    for i in range(n):
        a, b = map(int, input().split())
        x = a*b
        temp = set()
        for i in range(b, ((x/2)+1), b):
            if (x%i):
                temp.add(i)
        l.append(temp)
    
    cnt = 0
    # leni = len(l)
    # prev = -1
    # for i in range(leni):
    #     for 