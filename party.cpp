#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t, n, m, i, j, cakes, ans, s1, s2, l;

    cin >> t;

    for (; t--;)
    {
        cin >> n >> m;

        ll a[n + 1];
        vector<ll> adj[n + 1];
        ll deg[n + 1];

        for (i = 1; i <= n; i++)
        {
            deg[i] = 0;
            cin >> a[i];
        }

        cakes = m;
        ans = 0;

        for (; m--;)
        {
            cin >> i >> j;

            adj[i].push_back(j);
            adj[j].push_back(i);
            deg[i]++;
            deg[j]++;
        }

        if ((cakes % 2) == 0)
        {
            cout << "0\n";
            continue;
        }
        s1 = 1000000, s2 = 1000000;
        for (i = 1; i <= n; i++)
        {
            l = deg[i];
            if ((l % 2) == 1)
            {
                s1 = min(s1, a[i]);
            }
            else
            {
                for (j = 0; j < l; j++)
                {
                    if (deg[adj[i][j]] % 2 == 0)
                    {
                        s2 = min(s2, a[i] + a[adj[i][j]]);
                    }
                }
            }
        }
        ans = min(s1, s2);

        cout << ans << "\n";
    }
}