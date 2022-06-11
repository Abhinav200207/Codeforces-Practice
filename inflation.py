for _ in range(int(input())):
    n = list(map(int, input().split()))
    l = list(map(int, input().split()))
    ans = 0
    prevsum = l[0]
    for i in range(1, n[0]):
        if prevsum*n[1] < 100*l[i]:
            ans += (100*l[i]/n[1] - prevsum)
            # print(ans)
            prevsum += l[i] + (100*l[i]/n[1] - prevsum)
            continue
        prevsum += l[i]
    if (ans > int(ans)):
        print(int(ans) + 1)
    else:
        print(int(ans))