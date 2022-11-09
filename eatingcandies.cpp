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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int l = 0, r = n - 1;
        int alice = v[l], bob = v[r];
        int ans = 0;
        while (l < r)
        {
            if (alice == bob)
            {
                ans = max(ans, l + 1 + n - r);
            }
            if (alice <= bob)
            {
                l++;
                alice += v[l];
            }
            else if (alice > bob)
            {
                r--;
                bob += v[r];
            }
        }
        cout << ans << endl;
    }
}