#include <bits/stdc++.h>
using namespace std;

#define int long long int

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();

        // ------>
        int ans1 = 0;
        int cnt1 = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                cnt1++;
            }
            else
            {
                if (cnt1 == 0)
                {
                    // pass
                }
                else if (cnt1 == 1)
                {
                    ans1 += 1000000000000;
                }
                else
                {
                    ans1 += 1000000000001;
                }
            }
        }
        // <------

        int ans2 = 0;
        int cnt2_1 = 0;
        int cnt2_0 = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                cnt2_0++;
                cnt2_1 = 0;
            }
            else
            {
                cnt2_1++;
                if (cnt2_0 == 0)
                {
                    // pass
                }
                else if (cnt2_0 >= cnt2_1)
                {
                    ans2 += 1000000000000;
                }
                else
                {
                }
            }
        }
        cout << min(ans1, ans2) << endl;
    }
}