#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    vector<bool> vis(n + 1, false);
    sort(v.begin(), v.end());
    for (int i = 1; i <= n; i++)
    {
        // 24 7 16 7
        if (v[i] <= n && vis[v[i]] == false)
        {
            vis[v[i]] = true;
            continue;
        }
        while (v[i] > 0)
        {
            if (v[i] <= n && vis[v[i]] == false)
            {
                if (i == 3){
                    cout << "HOLA";
                }
                vis[v[i]] = true;
                continue;
            }
            v[i] = floor(v[i] / 2);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == false)
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
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
// YES
// NO
// YES
// NO
// NO
// YES

// 4