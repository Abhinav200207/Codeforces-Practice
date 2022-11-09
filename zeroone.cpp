#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long d = 0, n, t, x, y;
        string a, b;
        cin >> n >> x >> y >> a >> b;
        for (int i = 0; i < n; i++)
        {
            a[i] ^= b[i];
            d += a[i];
        }
        if (d % 2)
        {
            cout << -1 << endl;
            continue;
        }
        if (d == 2)
        {
            int l, r;
            for (l = 0; !a[l];)
                l++;
            for (r = n - 1; !a[r];)
                r--;
            if (l + 1 == r)
                cout << min(x, 2 * y) << endl;
            else
                cout << y << endl;
        }
        else
        {
            cout << d / 2 * y << endl;
        }
        // cout << endl;
    }
}