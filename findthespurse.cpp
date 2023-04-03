#include <bits/stdc++.h>
using namespace std;

#define int long long int

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<vector<int>> dp(n, vector<int>(m, 0));
        int cnt = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = m - 1; j >= 0; j--)
            {
                if (v[i][j] == '*')
                {
                    int lower_left = i + 1 < n && j - 1 >= 0 ? dp[i + 1][j - 1] : 0;
                    int lower = i + 1 < n ? dp[i + 1][j] : 0;
                    int lower_right = i + 1 < n && j + 1 < m ? dp[i + 1][j + 1] : 0;

                    dp[i][j] = 1 + min({lower_left, lower, lower_right});
                    cnt += dp[i][j];
                }
            }
        }
        cout << cnt << endl;
    }
}