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
        map<int, int> mp;
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        int ans = 0;
        for (auto i : mp)
        {
            if (i.second == 1)
            {
                ans = 1;
            }
        }
        if (ans == 1)
        {
            cout << "-1" << endl;
            continue;
        }
        vector<int> temp;
        temp.push_back(0);
        for (int i = 2; i <= n; i++)
        {
            if (v[i] != v[i - 1])
            {
                temp.push_back(i - 1);
            }
        }
        temp.push_back(n);
        for (int i = 1; i < temp.size(); i++)
        {
            cout << temp[i] << " ";
            for (int j = temp[i-1] + 1; j < temp[i]; j++)
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }
}