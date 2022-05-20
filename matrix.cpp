#include <bits/stdc++.h>
using namespace std;

// int isSafe(vector<vector<int>> matrix, int n, int m,int i,int j)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (matrix[i])
//     }
// }

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v(n + 1, vector<int>(m + 1, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> v[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (v[i][j] == 0)
                {
                }
            }
        }
    }
}