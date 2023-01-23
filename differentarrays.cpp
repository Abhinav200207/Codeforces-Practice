#include <bits/stdc++.h>
using namespace std;

long long int fun(long long int idx, vector<long long int> &v, long long int n, vector<vector<long long int>> &dp, long long int curr)
{
    if (idx == n - 1)
    {
        return 1;
    }
    if (dp[idx][curr + 90000] != -1)
        return dp[idx][curr + 90000];
    long long count = 0;
    count += fun(idx + 1, v, n, dp, v[idx + 1] + curr);
    if (curr)
        count += fun(idx + 1, v, n, dp, v[idx + 1] - curr);
    return dp[idx][curr + 90000] = count % 998244353;
}

int main()
{
    long long int n;
    cin >> n;
    vector<long long int> v(n);
    for (long long int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // map<pair<long long int, long long int>, long long int> mp;
    vector<vector<long long int>> dp(301, vector<long long int>(200001, -1));
    cout << fun(1, v, n, dp, v[1]) << endl;
}
