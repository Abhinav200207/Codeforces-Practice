#include <bits/stdc++.h>
using namespace std;
#define int long long int
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<pair<int, int>> res;
        for (int i = 1; i < n; i++)
        {
            if (v[i] < v[i - 1])
            {
                res.push_back({v[i - 1] - v[i], i});
            }
        }

        vector<int> ans(n);
        sort(res.begin(), res.end());
        reverse(res.begin(), res.end());

        int cnt = n - 1;
        for (int i = 0; i < res.size(); i++)
        {
            ans[cnt] = res[i].second + 1;
            cnt--;
        }

        for (int i = 0; i < n; i++)
        {
            if (ans[i] == 0)
            {
                ans[i] = 1;
                cnt--;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}