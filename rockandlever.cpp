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
        // vector<long long int> vis(n, 0);
        for (long long int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long int ans = 0;
        for (long long int j = 31; j >= 0; j--)
        {
            long long int cnt = 0;
            for (long long int i = 0; i < n; i++)
            {
                if ((1 << j) & v[i])
                {
                    cnt++;
                    // vis[i] = true;
                }
            }
            ans += ((cnt) * (cnt - 1)) / 2;
        }
        cout << ans << endl;
    }
}