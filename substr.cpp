#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, x;
        cin >> n >> x;
        vector<long long int> v(n);
        long long int sumnum = 0;
        for (long long int i = 0; i < n; i++)
        {
            cin >> v[i];
            sumnum += v[i];
        }
        sort(v.begin(), v.end());
        long long int ans = 0, day = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (sumnum > x)
            {
                sumnum -= (v[i] + day);
                continue;
            }
            long long int rem = x - sumnum;
            long long int add = rem / (i + 1);
            ans += ((add + 1) * (i + 1));
            day += (add + 1);
            sumnum += ((add + 1) * (i + 1));
            sumnum -= (v[i] + day);
        }
        cout << ans << endl;
    }
}