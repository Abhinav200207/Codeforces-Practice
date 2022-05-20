#include <bits/stdc++.h>

using namespace std;

const int MAX = 200007;
const int MOD = 1000000007;

void solve()
{
    int n, m, r, c;
    cin >> n >> m >> r >> c;
    r--;
    c--;
    char arr[n + 7][m + 7];
    int countB = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'B')
            {
                countB++;
            }
        }
    }
    if (!countB)
    {
        cout << -1 << '\n';
        return;
    }
    if (arr[r][c] == 'B')
    {
        cout << 0 << '\n';
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i][c] == 'B')
        {
            cout << 1 << '\n';
            return;
        }
    }
    for (int j = 0; j < m; j++)
    {
        if (arr[r][j] == 'B')
        {
            cout << 1 << '\n';
            return;
        }
    }
    cout << 2 << '\n';
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}