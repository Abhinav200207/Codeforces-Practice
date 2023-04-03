#include <bits/stdc++.h>
using namespace std;

#define int long long int 

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> pos, neg;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a > 0)
                pos.push_back(a);
            else
                neg.push_back(a);
        }

        sort(pos.begin(), pos.end());
        sort(neg.begin(), neg.end());

        int ans = 0;

        for (int i = pos.size() - 1; i >= 0; i -= k)
        {
            ans += pos[i];
        }
        for (int i = 0; i < neg.size(); i += k)
        {
            ans += abs(neg[i]);
        }
        int negi = neg.size() ? abs(neg[0]) : 0;
        int posi = pos.size() ? pos[pos.size() - 1] : 0;
        ans = 2 * ans - max(posi, negi);
        cout << ans << endl;
    }
}