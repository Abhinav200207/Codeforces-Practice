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
        int cnt1 = 0;
        for (int i = 1; i < n - 1; i++)
        {
            if (v[i - 1] < v[i] && v[i] > v[i + 1])
            {
                cnt1++;
            }
        }
        // cout << "cnt1 " << cnt1 << endl;

        int cnt2 = 0;
        int ans1 = 0;
        for (int i = 1; i < n - 1; i += 2)
        {
            cnt2++;
            if (v[i - 1] < v[i] && v[i] > v[i + 1])
            {
                // pass
            }
            else
            {
                int maxi = max(v[i - 1], v[i + 1]) + 1;
                ans1 += maxi - v[i];
            }
        }
        if (n % 2 == 1)
        {
            if (cnt1 >= cnt2)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << ans1 << endl;
            }
            continue;
        }

        int ans = ans1;
        for (int i = n - 3; i >= 1; i -= 2)
        {
            int curr = 0;
            int prev = 0;
            if (v[i - 1] >= v[i] || v[i] <= v[i + 1])
            {
                int maxi = max(v[i - 1], v[i + 1]) + 1;
                curr = maxi - v[i];
            }
            if (v[i] >= v[i + 1] || v[i + 1] <= v[i + 2])
            {
                int maxi = max(v[i], v[i + 2]) + 1;
                prev = maxi - v[i + 1];
            }
            ans1 = ans1 - curr + prev;
            ans = min(ans, ans1);
        }

        if (cnt1 >= cnt2)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
}