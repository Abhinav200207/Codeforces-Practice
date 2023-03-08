#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t, f, i, j, n, p;
    string ans;

    cin >> t;

    for (; t--;)
    {
        cin >> n;

        unordered_map<ll, ll> mp;

        ll k[n];
        vector<ll> bits[n];

        for (i = 0; i < n; i++)
        {
            cin >> k[i];

            for (j = 0; j < k[i]; j++)
            {
                cin >> p;
                if (mp.find(p) == mp.end())
                {
                    mp[p] = 1;
                }
                else
                {
                    mp[p]++;
                }
                bits[i].push_back(p);
            }
        }

        ans = "No";

        for (i = 0; i < n; i++)
        {
            f = 0;
            for (j = 0; j < k[i]; j++)
            {
                if (mp[bits[i][j]] == 1)
                {
                    f++;
                    break;
                }
            }
            if (f == 0)
            {
                ans = "Yes";
                break;
            }
        }

        cout << ans << "\n";
    }
}