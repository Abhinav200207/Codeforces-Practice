#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, d, w;
        cin >> n >> k >> d >> w;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int idx = upper_bound(v.begin(), v.end(), 3) - v.begin();
        cout << idx << endl;
        // int j = 0;
        // int cnt = 0;
        // while (j < n)
        // {
        //     int x = v[j] + w + d;
        //     int idx = upper_bound(v.begin(), v.end(), x) - v.begin();
        //     cout << "x: " << x << " idx: " << idx << " ";
        //     int log = idx - j;
        //     cout << "log: " << log << " ";
        //     cout << "j: " << j << " ";
        //     cnt++;
        //     if (k >= log)
        //     {
        //         j = idx;
        //     }
        //     else
        //     {
        //         j = j + k + 1;
        //     }
        // }
        // cout << endl << cnt << endl;
    }
}