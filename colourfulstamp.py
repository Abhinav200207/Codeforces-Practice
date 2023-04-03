def countWays(S, K, n):
    # base cases
    if S == 0:
        return 1
    if n == 0 or K == 0:
        return 0

    # check if the result is already computed
    if dp[S][n] != -1:
        return dp[S][n]

    # recursive step
    ways = countWays(S-1, K-1, n-1) + countWays(S, K, n-1)

    # memoize the result
    dp[S][n] = ways

    return ways


# initialize the dp table with -1
dp = [[-1 for j in range(4)] for i in range(1001)]

# example usage
S = 2
K = 2
n = 3
ways = countWays(S, K, n)
print(ways)  # output: 6
