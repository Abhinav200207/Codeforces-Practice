for _ in range(int(input())):
    x = int(input())
    a = x
    b = 0
    for i in range(32, -1, -1):
        if x & (1 << i) > 0:
            continue
        if 2 * x - a - b >= (2 << i):
            a += 1 << i
            b += 1 << i
    if a + b == 2 * x and a ^ b == x:
        print(a, b)
    else:
        print(-1)