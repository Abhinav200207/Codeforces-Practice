for _ in range(int(input())):
    n = int(input())
    ans = int(((n*(n + 1)*(2*n + 1)*(2022))/6)) + int(((n*(n - 1)*(n + 1)*(2022))/3))
    print(int((ans)%(1000000007)))