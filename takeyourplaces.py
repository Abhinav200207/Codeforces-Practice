for _ in range(int(input())):
    n = int(input())
    xor = 0
    for i in range(1,n-2):
        xor = xor^i
        print(i,end=" ")
    a = pow(2,29)
    b = pow(2,30)
    xor = xor ^ a ^ b
    print(a,b,xor)