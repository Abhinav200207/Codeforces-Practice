MOD = 998244353

for _ in range(int(input())):
    n = int(input())
    if n & 1:
        print(0)
        continue
    ans = 1
    for i in range(1, n // 2 + 1):
        ans = ans * i % MOD
    ans = ans * ans % MOD
    print(ans)
