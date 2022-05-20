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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans = 0;
        for (int i = 30; i >= 0; i--)
        {
            int cnt = 0;
            for (int j = 0; j < n; j++)
            {
                if (v[j] & (1 << i))
                {
                    cnt++;
                }
            }
            cnt = n - cnt;
            if (cnt <= k) ans+=(1<<i),k-=cnt;
        }
        cout << ans << endl;
    }
}