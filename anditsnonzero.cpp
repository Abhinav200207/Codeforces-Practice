#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)

const ll N = 2e5 + 1;
ll arr[N][19];
void pp()
{
    fl(i, 19)
        arr[0][i] = 0;
    for (int i = 1; i < N; i++)
    {
        ll in = 0;
        ll x = i;
        while (x > 0)
        {
            arr[i][in] = x % 2 + arr[i - 1][in];
            x /= 2;
            in++;
        }
    }
}
void solve()
{
    ll l, r;
    cin >> l >> r;
    ll m = LONG_LONG_MIN;
    fl(i, 19)
    {
        m = max(m, arr[r][i] - arr[l - 1][i]);
    }
    cout << r - l + 1 - m << "\n";
}
int main()
{
    pp();
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}