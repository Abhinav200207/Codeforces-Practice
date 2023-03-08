#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, d;
        cin >> n >> m >> d;
        vector<int> pos(n + 1);
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            pos[a] = i + 1;
        }
        vector<pair<int, int>> v(m); // {num,pos}
        for (int i = 0; i < m; i++)
        {
            int a;
            cin >> a;
            v[i] = {a, pos[a]};
        }

        // int flag = 0;

        // for (int i = 0; i < m - 1; i++)
        // {
        //     if (v[i].second > v[i + 1].second)
        //     {
        //         flag = 1;
        //         break;
        //     }
        // }

        // if (flag == 1)
        // {
        //     cout << "0" << endl;
        //     continue;
        // }

        int mindist = INT_MAX;

        for (int i = 0; i < m - 1; i++)
        {
            mindist = min(mindist, v[i + 1].second - v[i].second);
        }

        // cout << "mindist: " << mindist << endl;

        int maxdist = INT_MIN;
        int x = -1;
        int y = -1;

        for (int i = 0; i < m - 1; i++)
        {
            if (v[i + 1].second - v[i].second > maxdist)
            {
                maxdist = v[i + 1].second - v[i].second;
                x = v[i].second;
                y = v[i + 1].second;
            }
        }

        // cout << "maxdist: " << maxdist << endl;

        int temp = x - 1 + n - y;

        // cout << "temp: " << temp << endl;

        int temp1 = x + d - y + 1;

        // cout << "temp1: " << temp1 << endl;

        if (temp1 <= temp)
        {
            mindist = min(mindist, temp1);
        }

        if (mindist < 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << mindist << endl;
        }
    }
}