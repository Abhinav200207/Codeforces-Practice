#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = *min_element(a.begin(), a.end()), h = *max_element(a.begin(), a.end());
    while (l <= h)
    {
        int f = 0;
        int m = (l + h) / 2;

        for (int i = 0; i < n - 1; i++)
        {
            if ((abs(a[i] - m) > abs(a[i + 1] - m)))
            {
                if (a[i] > a[i + 1])
                {
                    f = 1;
                }
                else
                {
                    f = 2;
                }
                break;
            }
        }

        if (f == 1)
            l = m + 1;
        else if (f == 2)
            h = m - 1;
        else
        {
            cout << m << "\n";
            return;
        }
    }
    cout << "-1\n";
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}