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
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int a, b;
        cin >> a >> b;

        int ans = INT_MAX;

        if (x1 - (a - (n - x2)) >= 0)
        {
            ans = min(ans, a - (n - x2));
        }
        if (y1 - (b - (m - y2)) >= 0)
        {
            ans = min(ans, b - (m - y2));
        }
        if (x2 + (a - x1) <= n)
        {
            ans = min(ans, a - x1);
        }
        if (y2 + (b - y1) <= m)
        {
            ans = min(ans, b - y1);
        }
        if (ans < 0)
        {
            cout << 0 << endl;
        }
        else if (ans == INT_MAX)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
}