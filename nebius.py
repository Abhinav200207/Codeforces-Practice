#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (n < 0)
        {
            n = -n;
        }
        if (m < 0)
        {
            m = -m;
        }
        int mini = min(n, m);
        int maxi = max(n, m);
        maxi -= mini;
        int ans = mini * 2;
        ans += maxi + ((maxi - 1) > 0 ? (maxi - 1) : 0);
        cout << ans << endl;
    }
}