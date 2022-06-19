#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>> &a)
{
    int n = a.size(), m = a[0].size();
    vector<int> bad;
    for (int i = 0; i < n && bad.empty(); i++)
    {
        vector<int> b = a[i];
        sort(b.begin(), b.end());
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] != b[j])
                bad.push_back(j);
        }
    }
    if ((int)bad.size() == 0)
    {
        cout << 1 << " " << 1 << "\n";
        return;
    }
    if ((int)bad.size() > 2)
    {
        cout << -1 << "\n";
        return;
    }
    for (int i = 0; i < n; i++)
    {
        swap(a[i][bad[0]], a[i][bad[1]]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (a[i][j] < a[i][j - 1])
            {
                cout << -1 << "\n";
                return;
            }
        }
    }
    cout << bad[0] + 1 << " " << bad[1] + 1 << "\n";
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        solve(a);
    }
}