#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[i] = make_pair(v1[i], x);
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i].first > v[i].second)
        {
            cout << "NO" << endl;
            return;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i].first != v[i].second && v[(i + 1) % n].second + 1 < v[i].second)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    return;
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}