#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> v(m);
        vector<int> dp(n + 1);
        for (int i = 0; i < m; i++)
        {
            cin >> v[i];
            dp[v[i]]++;
        }
        int ans = 0;
        for (int i = 0; i < m; i++)
        {
        }
    }
}