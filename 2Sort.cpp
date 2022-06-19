#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        int cnt = 1;
        for (int i = 2; i <= k + 1; i++)
        {
            if (v[i - 1] < v[i] * 2)
            {
                cnt++;
            }
        }
        int ans = 0;
        for (int i = 2; i <= n - k; i++)
        {
            if (cnt == k + 1)
            {
                ans++;
            }
            if (v[i - 1] < v[i] * 2)
            {
                cnt--;
            }
            if (v[i + k - 1] < v[i + k] * 2)
            {
                cnt++;
            }
        }
        if (cnt == k + 1)
        {
            ans++;
        }
        cout << ans << endl;
    }
}