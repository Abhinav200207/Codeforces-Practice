#include <bits/stdc++.h>
using namespace std;

int isValid(int x, int y, int n, int m)
{
    if (x < 1 || y < 1 || x > n || y > m)
    {
        return false;
    }
    return true;
}

pair<int, int> fun(int n, int m)
{
    int dirX[8] = {2, 2, 1, 1, -1, -1, -2, -2};
    int dirY[8] = {1, -1, 2, -2, 2, -2, 1, -1};
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            int flag = 0;
            for (int k = 0; k < 8; k++)
            {
                int new_i = i + dirX[k];
                int new_j = j + dirY[k];
                // if (i == 2 && j == 2)
                // {
                //     cout << "Hello ji: " << i << " " << j << " new: " << new_i << " " << new_j << endl;
                // }
                if (isValid(new_i, new_j, n, m))
                {
                    flag = 1;
                }
            }
            if (flag == 0)
            {
                return make_pair(i, j);
            }
        }
    }
    return make_pair(n, m);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        pair<int, int> p = fun(n, m);
        cout << p.first << " " << p.second << endl;
    }
}