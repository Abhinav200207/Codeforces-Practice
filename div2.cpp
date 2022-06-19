#include <bits/stdc++.h>
using namespace std;

void printtwovector(vector<vector<int>> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> v[i][j];
            }
        }
        vector<vector<int>> dp(n, vector<int>(m, 0));
        dp[0][0] = v[0][0];
        for (int i = 1; i < n; i++)
        {
            dp[i][0] = dp[i - 1][0] + v[i][0];
        }
        for (int i = 1; i < m; i++)
        {
            dp[0][i] = dp[0][i - 1] + v[0][i];
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < m; j++)
            {
                if (v[i][j] == 1)
                {
                    if (dp[i - 1][j] <= 0 && dp[i][j - 1] <= 0)
                    {
                        dp[i][j] = max(v[i][j] + dp[i - 1][j],v[i][j] + dp[i][j - 1]);
                    }
                    else
                    {
                        dp[i][j] = min(v[i][j] + dp[i - 1][j],v[i][j] + dp[i][j - 1]);
                    }
                }
                else
                {
                    if (dp[i - 1][j] >= 0 && dp[i][j - 1] >= 0)
                    {
                        dp[i][j] = min(v[i][j] + dp[i - 1][j],v[i][j] + dp[i][j - 1]);
                    }
                    else
                    {
                        dp[i][j] = max(v[i][j] + dp[i - 1][j],v[i][j] + dp[i][j - 1]);
                    }
                }
            }
        }
        // printtwovector(dp);
        if (dp[n - 1][m - 1] == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}