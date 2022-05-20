#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        vector<int> ans;
        for (auto i : mp)
        {
            if (i.second >= k)
            {
                ans.push_back(i.first);
            }
        }
        if (ans.size() == 0)
        {
            cout << "-1" << endl;
            continue;
        }
        sort(ans.begin(), ans.end());
        vector<vector<int>> finalans;
        vector<int> temp;
        for (int i = 0; i < ans.size(); i++)
        {
            if (temp.size() == 0)
            {
                temp.push_back(ans[i]);
            }
            else
            {
                if (ans[i] - temp[temp.size() - 1] == 1)
                {
                    temp.push_back(ans[i]);
                    continue;
                }
                else
                {
                    finalans.push_back(temp);
                    temp.clear();
                    temp.push_back(ans[i]);
                }
            }
        }
        finalans.push_back(temp);
        vector<int> finaltemp;
        for (int i = 0; i < finalans.size(); i++)
        {
            if (finaltemp.size() < finalans[i].size())
            {
                finaltemp = finalans[i];
            }
        }
        cout << finaltemp[0] << " " << finaltemp[finaltemp.size() - 1] << endl;
    }
}