#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> v(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            int a;
            cin >> a;
            v[i] = v[i - 1] + a;
        }
        // for (auto i : v)
        // {
        //     cout << i << " ";
        // }
        vector<int> sum(n + 1, INT_MIN);
        for (int i = 1; i <= n; i++)
            for (int j = 0; j <= i; j++)
                sum[i - j] = max(sum[i - j], v[i] - v[j]);
        // cout << endl;
        // for (auto i : sum)
        // {
        //     cout << i << " ";
        // }
        // cout << endl;
        for (int k = 0; k <= n; k++)
        {
            int ans = 0;
            for (int i = 0; i <= n; i++)
            {
                if (i < k)
                {
                    ans = max(ans, sum[i] + i * x);
                }
                else
                {
                    ans = max(ans, sum[i] + k * x);
                }
            }
            cout << ans << " ";
        }
        cout << endl;
    }
}