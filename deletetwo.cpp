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
        vector<long long> v(n);
        map<long long, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        sort(v.begin(), v.end());
        long long sumnum = (accumulate(v.begin(), v.end(), 0LL));
        if ((2 * sumnum) % n != 0)
        {
            cout << "0" << endl;
            continue;
        }
        long long need = (2 * sumnum) / n;
        long long ans = 0;
        for (int i = 0; i < n; ++i)
        {
            int a1 = v[i];
            int a2 = need - a1;
            if (mp.find(a2) != mp.end())
                ans += mp[a2];
            if (a1 == a2)
                ans -= 1;
        }
        cout << ans/2 << endl;
    }
}