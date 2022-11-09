#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll l, r;

ll bs_sqrt(ll x)
{
    ll left = 0, right = 2000000123;
    while (right > left)
    {
        ll mid = (left + right) / 2;

        if (mid * mid > x)
            right = mid;
        else
            left = mid + 1;
    }
    return left - 1;
}

// main solution goes here:
void solve()
{
    cin >> l >> r;
    ll sql = bs_sqrt(l), sqr = bs_sqrt(r);
    ll ans;
    if (sql == sqr)
    {
        ans = 0;
        for (int i = 0; i < 3; i++)
        {
            if (l <= sql * (sql + i) && sql * (sql + i) <= r)
                ans++;
        }
    }
    else
    {
        ans = (sqr - sql - 1) * 3;
        for (int i = 0; i < 3; i++)
        {
            if (l <= sql * (sql + i) && sql * (sql + i) <= r)
                ans++;
            if (l <= sqr * (sqr + i) && sqr * (sqr + i) <= r)
                ans++;
        }
    }
    cout << ans << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}