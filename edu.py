for _ in range(int(input())):
    l1 = list(map(int, input().split()))
    l2 = list(map(int, input().split()))
    l = [l1,l2]
    # print(l)
    if (l == [[0,0],[0,0]]):
        print(0)
    elif (l == [[1,1],[1,1]]):
        print(2)
    else:
        print(1)