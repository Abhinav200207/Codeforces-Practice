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
        if (n == 1)
        {
            cout << 1 << "\n"
                 << 1 << "\n"
                 << 1 << "\n";
        }
        else
        {
            vector<int> leaves;
            vector<bool> vis(n + 1, false);
            set<int> st(v.begin() + 1, v.end());
            for (int i = 1; i <= n; i++)
            {
                if (!st.count(i))
                    leaves.push_back(i);
            }
            st.clear();
            vector<vector<int>> ans;
            for (auto i : leaves)
            {
                vector<int> temp;
                int x = i;
                while (!vis[x] && v[x] != x)
                {
                    temp.push_back(x);
                    vis[x] = true;
                    x = v[x];
                }
                if (!vis[x])
                {
                    temp.push_back(x);
                    vis[x] = true;
                }
                reverse(temp.begin(), temp.end());
                ans.push_back(temp);
                temp.clear();
            }
            cout << ans.size() << endl;
            for (auto i : ans)
            {
                cout << i.size() << endl;
                for (auto j : i)
                {
                    cout << j << " ";
                }
                cout << endl;
            }
            cout << endl;
            cout << endl;
        }
    }
}