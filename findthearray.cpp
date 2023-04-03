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
        vector<int> v1(n), v2(n);
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                v1[i] = 1;
                v2[i] = v[i];
            }
            else
            {
                v1[i] = v[i];
                v2[i] = 1;
            }
        }
        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            cnt1 += abs(v1[i] - v[i]);
            cnt2 += abs(v2[i] - v[i]);
        }

        if (cnt1 > cnt2)
        {
            for (int i = 0; i < n; i++)
            {
                cout << v2[i] << " ";
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout << v1[i] << " ";
            }
        }
        cout << endl;
    }
}