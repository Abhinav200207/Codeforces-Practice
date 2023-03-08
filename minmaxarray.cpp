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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        for (int i = 0; i < n; i++)
        {
            int idx = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
            cout << b[idx] - a[i] << " ";
        }
        // set<int> st(b.begin(), b.end());

        vector<int> ans;
        int lst = n;
        for (int i = n - 1; i >= 0; i--)
        {
            int idx = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
            ans.push_back(b[lst - 1] - a[i]);
            if (i == idx)
                lst = i;
        }
        cout << endl;
        reverse(ans.begin(), ans.end());
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}
