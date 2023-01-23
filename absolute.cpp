#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll x;
void bs(ll l, ll h, ll a[], ll n)
{
    ll i, f = 0;
    if (l <= h)
    {
        ll m = (l + h) / 2;

        for (i = 0; i < n - 1; i++)
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
            bs(m + 1, h, a, n);
        else if (f == 2)
            bs(l, m - 1, a, n);
        else
            x = m;
    }
}
int main()
{
    ll t, n, i, j, f;

    cin >> t;

    for (; t--;)
    {
        cin >> n;
        ll a[n];

        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        x = -1;

        bs(0, 1000000000, a, n);

        cout << x << "\n";
    }
}