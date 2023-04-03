#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        cout << n * m << endl;
        vector<vector<int>> grid(n, vector<int>(m, 0));
        for (int i = 0; i < grid.size(); i++)
        {
            grid[i][0] = i + 1;
        }
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 1; j < grid[0].size(); j++)
            {
                grid[i][j] = grid[i][j - 1] + 256; // bin -> 100000000
            }
        }
        for (auto v : grid)
        {
            for (auto i : v)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
}