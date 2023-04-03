#include <bits/stdc++.h>
using namespace std;

#define int long long int

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int faltu = 0;
        int cnt = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 1)
            {
                cnt++;
                if (faltu > 0)
                {
                    faltu--;
                }
                else
                {
                    ans++;
                }
            }
            else
            {
                faltu = ans - ((int)(cnt / 2) + 1);
            }
        }
        cout << ans << endl;
    }
}