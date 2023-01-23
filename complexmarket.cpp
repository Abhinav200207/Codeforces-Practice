#include <bits/stdc++.h>
using namespace std;

vector<bool> SieveOfEratosthenes(int n)
{
    vector<bool> prime(n + 1);
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    prime[1] = false;
    return prime;
}

int main()
{
    int t;
    cin >> t;
    vector<bool> isPrime = SieveOfEratosthenes(1e6);
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int primecnt = 0;
        int onecnt = 0;
        for (auto i : v)
        {
            if (v[i] == 1)
            {
                onecnt++;
            }
            else if (isPrime[v[i]])
            {
                primecnt++;
            }
        }
        if (primecnt == 0 || onecnt == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            vector<vector<int>> dp(n, {0, 0, 0});
            for (int i = 0; i < n; i++)
            {
                if (v[i] == 1)
                {
                    if (i - k >= 0 && v[i - k] == 1 && isPrime[dp[i - k][0]])
                    {
                        dp[i] = {v[i - k], dp[i - k][1], dp[i - k][2] + 1};
                    }
                    else if (i - k >= 0 && isPrime[v[i - k]] && isPrime[dp[i - k][0]])
                    {
                        dp[i] = {v[i - k], dp[i - k][1] + 1, dp[i - k][2] + 1};
                    }
                    else if (i - k >= 0 && v[i - k] == 1 && dp[i - k][0] == 1)
                    {
                        dp[i] = {1, dp[i - k][1], dp[i - k][2] + 1};
                    }
                }
                else if (!isPrime[v[i]])
                {
                    dp[i] = {v[i], 0};
                }
                else
                {
                    if (i - k >= 0 && v[i - k] == 1)
                    {
                        dp[i] = {v[i], dp[i - k][2], 0};
                    }
                    else if (i - k >= 0 && v[i - k] != 1)
                    {
                        dp[i] = {v[i], 0, 0};
                    }
                }
            }
        }
    }
}