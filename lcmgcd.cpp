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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        int f = INT_MIN;
        for (auto i : mp)
        {
            if (i.second >= f)
            {
                f = i.second;
            }
        }
        if (f == n)
        {
            cout << 0 << endl;
            continue;
        }
        if (n % 2 == 0 && f >= n / 2)
        {
            cout << 1 + n - f << endl;
            continue;
        }
        if (n % 2 == 1 && f > n / 2)
        {
            cout << 1 + n - f << endl;
            continue;
        }
        else
        {
            int ans = 0;
            while (f < n)
            {
                if (n % 2 == 0 && f >= n / 2)
                {
                    ans++;
                    ans += n - f;
                    f += (n - f);
                    continue;
                }
                if (n % 2 == 1 && f > n / 2)
                {
                    ans++;
                    ans += n - f;
                    f += (n - f);
                    continue;
                }
                ans += 1;
                ans += f;
                f += f;
            }
            cout << ans << endl;
        }
    }
}