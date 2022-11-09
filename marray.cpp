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
        map<int, int> cnt;
        while (n--)
        {
            int x;
            cin >> x;
            cnt[x % m]++;
        }
        int ans = 0;
        for (auto c : cnt)
        {
            if (c.first == 0)
                ans++;
            else if (2 * c.first == m)
                ans++;
            else if (2 * c.first < m || cnt.find(m - c.first) == cnt.end())
                ans += 1 + max(0, abs(c.second - cnt[m - c.first]) - 1);
        }
        cout << ans << endl;
    }
}