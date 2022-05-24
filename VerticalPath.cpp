#include <bits/stdc++.h>
using namespace std;

vector<bool> vis(100000, false);
void fun(vector<int> &v, int x, vector<int> &temp, map<int, vector<int>> &mp)
{
    if (!vis[x])
    {
        
        temp.push_back(x);
        vis[x] = true;
    }
    if (mp[x].size() == 0)
    {
        return;
    }
    fun(v, mp[x].back(), temp, mp);
    mp[x].pop_back();
}

int main()
{
    // int x;
    // int t;
    // cin >> t;
    // while (t--)
    // {
    int n = 6;
    // cin >> n;
    vector<int> v{0, 4 ,4, 4, 4, 1, 2};
    map<int, vector<int>> mp;
    for (int i = 1; i <= n; i++)
    {
        // cin >> v[i];
        mp[v[i]].push_back(i);
    }
    vector<vector<int>> ans;
    for (int i = 1; i <= n; i++)
    {
        vector<int> temp;
        if (!vis[v[i]])
        {
            temp.push_back(v[i]);
            vis[v[i]] = true;
        }
        cout << i << endl;
        fun(v, i, temp, mp);
        ans.push_back(temp);
    }
    for (int i = 0; i <= ans.size(); i++)
    {
        if (ans[i].size() == 0)
            continue;
        cout << ans[i].size() << endl;
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    // }
}