#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n, m;
        int v[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> v[i][j];
            }
        }
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int now = 0;
                int ci = i, cj = j;
                while (ci >= 0 && ci < n && cj >= 0 && cj < m)
                {
                    now += v[ci][cj];
                    ci--;
                    cj--;
                }
                ci = i, cj = j;
                while (ci >= 0 && ci < n && cj >= 0 && cj < m)
                {
                    now += v[ci][cj];
                    ci++;
                    cj--;
                }
                ci = i, cj = j;
                while (ci >= 0 && ci < n && cj >= 0 && cj < m)
                {
                    now += v[ci][cj];
                    ci--;
                    cj++;
                }
                ci = i, cj = j;
                while (ci >= 0 && ci < n && cj >= 0 && cj < m)
                {
                    now += v[ci][cj];
                    ci++;
                    cj++;
                }
                now -= v[i][j] * 3;
                cout << now << endl;
                mx = max(mx, now);
            }
        }
        cout << mx << endl;
    }
}