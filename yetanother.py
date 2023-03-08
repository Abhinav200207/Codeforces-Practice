for _ in range(int(input())):
    a, b = map(int, input().split())
    n, m = map(int, input().split())

    # for 1 unit in second day we have to pay = b
    # for 1 unit in first day we have to pay = int((a*m)/(m+1))

    if (b*(m+1) <= (a*m)):
        print(b*n)
        continue

    y = int(n/(m+1))*(m)  # 9

    cst = y*a

    w = n % (m+1)

    if (a < b):
        cst += a*w
    else:
        cst += b*w
    print(cst)