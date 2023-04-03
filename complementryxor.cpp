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
        string s1, s2;
        cin >> s1 >> s2;

        int type = 0;

        if (s1[0] == s2[0])
        {
            type = 1; // all equal
        }
        else
        {
            type = 2; // all unequal
        }

        int flag = 1;
        if (type == 1)
        { // all equal
            for (int i = 0; i < n; i++)
            {
                if (s1[i] != s2[i])
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (type == 2)
        { // all unequal
            for (int i = 0; i < n; i++)
            {
                if (s1[i] == s2[i])
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 0)
        {
            cout << "NO" << endl;
            continue;
        }

        vector<pair<int, int>> ans;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] == '1')
            {
                ans.push_back({i + 1, i + 1});
                type = 3 - type;
            }
        }
        if (type == 2)
        {
            ans.push_back({1, 1});
            ans.push_back({2, n});
            ans.push_back({1, n});
        }

        cout << "YES\n";
        cout << ans.size() << endl;
        for (auto i : ans)
            cout << i.first << " " << i.second << endl;
    }
}