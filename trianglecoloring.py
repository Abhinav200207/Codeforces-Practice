def nCr(n, r, mod):
    # Initialize variables
    num = 1
    den = 1

    # Compute numerator and denominator using iterative multiplication
    for i in range(r):
        num *= (n-i)
        den *= (i+1)

        # Reduce the result modulo mod
        num %= mod
        den %= mod

    # Compute the final result as num/den modulo mod
    result = (num * pow(den, mod-2, mod)) % mod

    return result


n = int(input())
l = list(map(int, input().split()))
ans = nCr(int(n/3),int(n/6),998244353)

for i in range(0, n, 3):
    temp = sorted(l[i:i + 3])
    if (temp[0] == temp[1] == temp[2]):
        ans = (ans*3) % 998244353
    elif (temp[0] == temp[1]):
        ans = (ans*2) % 998244353

print(ans)
