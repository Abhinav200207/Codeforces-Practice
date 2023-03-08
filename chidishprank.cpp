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
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        if (v[0][0] == '1')
        {
            cout << -1 << endl;
            continue;
        }

        vector<vector<int>> ans;

        for (int i = 0; i < n; i++)
        {
            for (int j = m - 1; j >= 1; j--)
            {
                if (v[i][j] == '1')
                {
                    ans.push_back({i + 1, j, i + 1, j + 1});
                }
            }
        }

        for (int i = n - 1; i >= 1; i--)
        {
            if (v[i][0] == '1')
            {
                ans.push_back({i, 1, i + 1, 1});
            }
        }

        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++)
        {
            for (auto x : ans[i])
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }
}