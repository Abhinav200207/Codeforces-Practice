#include <bits/stdc++.h>
using namespace std;

void solve()
{

    // vector<vector<pair<int, int>>> adj(n);
    // for (int i = 0; i < n - 1; i++)
    // {
    //     cout << str[i + 1] << endl;
    //     if (str[i + 1] == 'B')
    //     {
    //         adj[v[i]].push_back(make_pair(i + 2, 1));
    //     }
    //     if (str[i + 1] == 'W')
    //     {
    //         adj[v[i]].push_back(make_pair(i + 2, 0));
    //     }
    // }
    // cout << adj.size() << endl;
    // for (int i = 1; i < adj.size(); i++)
    // {
    //     cout << "For " << i << " :";
    //     for (int j = 0; j < adj[i].size(); j++)
    //     {
    //         cout << " " << adj[i][j].first << " " << adj[i][j].second << " ";
    //     }
    //     cout << endl;
    // }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        string s;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        cin >> s;
        cout << s << endl;
    }
}