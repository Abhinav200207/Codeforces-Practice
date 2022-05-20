from math import pow
n,t = map(int, input().split())

if (n == 1 and t == 10):
    print(-1)
else:

    if n == 1:
        print(t)
    else:
        if (t == 10):
            print("1"*(n-1) + "0")
        else:
            if pow(10,n-1) < t:
                print(-1)
            else:
                print(f"{t}"*n)
