#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> ans(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int x = l / i;
        if (l % i == 0)
        {
            ans[i] = l;
            continue;
        }
        if (l % i != 0)
        {
            if (i * (x + 1) <= r)
            {
                ans[i] = i * (x + 1);
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
    for (int i = 1; i <= n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
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