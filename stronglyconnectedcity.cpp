#include <bits/stdc++.h>
using namespace std;

void dfs(int i, unordered_map<int, vector<int>> &adj, vector<bool> &vis)
{
    vis[i] = true;
    for (auto j : adj[i])
    {
        if (!vis[j])
            dfs(j, adj, vis);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    string horzintal, vertical;
    cin >> horzintal >> vertical;
    unordered_map<int, vector<int>> adj;
    for (int i = 1; i <= n; i++)
    {
        if (horzintal[i - 1] == '>')
        {
            int x = m * (i - 1) + 1;
            while (x < m * i)
            {
                adj[x].push_back(x + 1);
                x++;
            }
        }
        else
        {
            int x = m * i;
            while (x > m * (i - 1) + 1)
            {
                adj[x].push_back(x - 1);
                x--;
            }
        }
    }
    for (int i = 1; i <= m; i++)
    {
        if (vertical[i - 1] == 'v')
        {
            int x = i;
            while (x < m * (n - 1) + i)
            {
                adj[x].push_back(x + m);
                x += m;
            }
        }
        else
        {
            int x = m * (n - 1) + i;
            while (x > i)
            {
                adj[x].push_back(x - m);
                x -= m;
            }
        }
    }

    int flag = 1;
    for (int i = 1; i <= n * m; i++)
    {
        vector<bool> vis(n * m + 1, false);
        dfs(i, adj, vis);
        for (int j = 1; j <= n * m; j++)
        {
            if (vis[j] == false)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
    if (flag == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    // for (auto i : adj)
    // {
    //     cout << i.first << " -> ";
    //     for (auto j : adj[i.first])
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
}
