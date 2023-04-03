#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> dp(n - 1);
    dp[0] = 1;
    cout << 1 << " ";
    int prev = 1;
    for (int i = 1; i < n - 1; i++)
    {
        if (s[i] == s[i - 1])
        {
            dp[i] = dp[i - 1];
            prev++;
        }
        else
        {
            dp[i] = dp[i - 1] + prev;
            prev = 1;
        }
        cout << dp[i] << " ";
    }
    cout << endl;
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}