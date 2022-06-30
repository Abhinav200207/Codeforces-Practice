#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        vector<int> suff(n);
        for (int i = 0; i < n; i++)
        {
            suff[i] += (i ? suff[i - 1] : 0) + v[i];
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << suff[i] << " ";
        // }
        // cout << endl;
        while (q--)
        {
            int x;
            // cout << "Start Here:" << endl;
            cin >> x;
            if (x == suff[n - 1])
            {
                cout << n << endl;
                continue;
            }
            if (x > suff[n - 1])
            {
                cout << -1 << endl;
                continue;
            }
            else
            {
                int index = (upper_bound(suff.begin(), suff.end(), x) - suff.begin());
                // cout << index << endl;
                if (suff[index - 1] == x)
                {
                    cout << index << endl;
                }
                else
                {
                    cout << index + 1 << endl;
                }
            }
            // cout << "End Here:" << endl;
        }
    }
}