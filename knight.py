n = int(input())
for i in range(1,n+1):
    if (i%2 == 0):
        for j in range(1,n+1):
            if j%2 == 0:
                print("W",end="")
            if j%2 == 1:
                print("B",end="")
        print("")
    if (i%2 == 1):
        for j in range(1,n+1):
            if j%2 == 1:
                print("W",end="")
            if j%2 == 0:
                print("B",end="")
        print("")