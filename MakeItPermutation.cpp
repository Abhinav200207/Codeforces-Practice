#include <bits/stdc++.h>
using namespace std;

#define int long long int

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c, d;
        cin >> n >> c >> d;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            mp[a]++;
        }
        int cnt = 0;
        int ans = n * c + d; // for handling case like in which we have to delete all element and add 1 to array

        for (auto i : mp)
        {
            cnt++;
            ans = min(ans, (n - cnt) * c + (i.first - cnt) * d);
        }
        cout << ans << endl;
    }
}