#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> vis(2 * n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            vis[v[i]] = 1;
        }
        int ans = 1;
        vector<int> ansv;
        for (int i = 0; i < n; i++)
        {
            int milla = 0;
            for (int j = v[i]; j <= 2 * n; j++)
            {
                if (!vis[j])
                {
                    ansv.push_back(v[i]);
                    ansv.push_back(j);
                    vis[j] = 1;
                    milla = 1;
                    break;
                }
            }
            if (milla == 0)
            {
                ans = -1;
                break;
            }
        }
        if (ans == -1)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 0; i < ansv.size(); i++)
            {
                cout << ansv[i] << " ";
            }
            cout << endl;
        }
    }
}