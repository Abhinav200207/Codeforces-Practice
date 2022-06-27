#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<long long int> v(n);
        for (long long int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long int suf = 0, pre = 0, pre_val = v[0], ans = 0;
        for (long long int i = 1; i < n; i++)
        {
            v[i] = v[i] - suf;
            if (v[i] <= pre_val)
            {
                ans += pre_val - v[i];
                pre_val = v[i];
            }
            else
            {
                suf += (v[i] - pre_val);
                ans += v[i] - pre_val;
            }
        }
        ans += abs(pre_val);
        cout << ans << endl;
    }
}