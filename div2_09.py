for _ in range(int(input())):
    n = int(input().strip())
    i = 0
    minuss = 0
    vec = [0 for i in range(10)]
    while n:
        vec[i] = n % 10
        n = n // 10
        i += 1
    arr1 = [0 for i in range(10)]
    arr2 = [0 for i in range(10)]
    for j in range(i):
        g = vec[j] & 1
        if g:
            q = vec[j] // 2
            arr1[j] = q + minuss
            arr2[j] = q + 1 - minuss
            minuss = 1 - minuss
        else:
            arr1[j] = arr2[j] = vec[j] // 2
    ans1 = 0
    ans2 = 0
    res = 1
    for j in range(i):
        ans2 += arr2[j] * res
        ans1 += arr1[j] * res
        res *= 10
    print(ans1, ans2)
