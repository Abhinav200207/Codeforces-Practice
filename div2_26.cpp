#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;

        vector<vector<int>> grid(m);

        for (int i = 0; i < m; i++)
        {
            int n;
            cin >> n;
            vector<int> v(n);
            for (int j = 0; j < n; j++)
            {
                cin >> v[j];
            }
            grid[i] = v;
        }

        unordered_set<int> st;

        vector<int> ans;

        int badaflag = 1;

        for (int i = m - 1; i >= 0; i--)
        {
            int flag = 0;
            for (auto x : grid[i])
            {
                if (flag == 0 && st.find(x) == st.end())
                {
                    flag = 1;
                    ans.push_back(x);
                }
                st.insert(x);
            }
            if (flag == 0)
            {
                badaflag = 0;
                break;
            }
        }
        if (badaflag == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            reverse(ans.begin(), ans.end());
            for (auto x : ans)
                cout << x << " ";
            cout << endl;
        }
    }
}