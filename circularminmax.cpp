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
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        if (n % 2 == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        sort(v.begin(), v.end());
        vector<int> v1;
        vector<int> v2;
        for (int i = 1; i <= n / 2; i++)
        {
            v1.push_back(v[i]);
        }
        for (int i = n / 2 + 1; i <= n; i++)
        {
            v2.push_back(v[i]);
        }
        vector<int> ans;
        for (int i = 0; i < v1.size(); i++)
        {
            ans.push_back(v1[i]);
            ans.push_back(v2[i]);
        }
        bool b = true;
        for (int i = 1; i < n - 1; i += 2)
        {
            if (ans[i] > ans[i + 1] && ans[i] > ans[i - 1])
            {
                continue;
            }
            b = false;
        }
        if (!b)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }
}