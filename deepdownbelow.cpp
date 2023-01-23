#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            long long int temp = INT_MIN;
            for (int j = 0; j < k; j++)
            {
                long long int a;
                cin >> a;
                temp = max(temp, a - j + 1);
            }
            v[i] = make_pair(temp, k);
        }
        sort(v.begin(), v.end());

        long long int l = v[0].first, h = v[n - 1].first;
        long long int mid, curr, ans = 1e12;
        while (l <= h)
        {
            mid = (l + h) / 2;
            int flag = 1;
            curr = mid;
            for (int i = 0; i < n; i++)
            {
                if (curr >= v[i].first)
                {
                    curr += v[i].second;
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
            if (flag)
            {
                ans = mid;
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans << endl;
    }
}