#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> adj, int i, vector<int> vis, int count)
{
    vis[i] = count;
    for (auto j : adj[i])
    {
        if (vis[j] == 0)
        {
            dfs(adj,j,vis,count);
        }
    }
}

void solve(vector<vector<int>> adj, int n)
{
    int count = 0;
    vector<int> vis(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == 0)
        {
            count++;
            dfs(adj,i,vis,count);
        }
    }
    cout << count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<vector<int>> adj(n);
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (v[j] < v[i])
                {
                    adj[i].push_back(v[j]);
                    adj[j].push_back(v[i]);
                }
            }
        }
        solve(adj, n);
    }
}