#include <bits/stdc++.h>
using namespace std;

#define int long long int

int fun(vector<int> arr, int n)
{
    int sum = 0;
    for (int i = n - 1; i >= 0; i--)
        sum += i * arr[i] - (n - 1 - i) * arr[i];
    return sum;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v(m);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int a;
                cin >> a;
                v[j].push_back(a);
            }
        }
        int ans = 0;
        for (auto x : v)
        {
            sort(x.begin(), x.end());
            ans += fun(x, n);
        }
        cout << ans << endl;
    }
}