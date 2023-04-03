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
        int pos = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] > 0)
                pos++;
        }
        int x = 0;
        vector<int> ans;
        sort(v.begin(), v.end(), greater<>());
        for (int i = 0; i < n; i++)
        {
            if (v[i] > 0)
            {
                x++;
                ans.push_back(x);
            }
            else
            {
                x--;
                ans.push_back(x);
            }
        }
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        ans.clear();
        int neg = n - pos;
        int y = min(pos, neg);
        for (int i = 0; i < y; i++)
        {
            ans.push_back(1);
            pos--;
            neg--;
            ans.push_back(0);
        }

        y = n - 2 * y;
        if (pos == 0)
        {
            int x = 0;
            for (int i = 0; i < y; i++)
            {
                ans.push_back(--x);
            }
        }
        else if (neg == 0)
        {
            int x = 0;
            for (int i = 0; i < y; i++)
            {
                ans.push_back(++x);
            }
        }
        cout << endl;
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }

        cout << endl;
    }
}