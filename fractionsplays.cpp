#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int cnt = 0;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (v[i][j] == '1')
                    cnt++;
                if ((v[i][j] == '0' && j + 1 < m && v[i][j + 1] == '0') || (v[i][j] == '0' && j - 1 >= 0 && v[i][j - 1] == '0') || (v[i][j] == '0' && i + 1 < n && v[i + 1][j] == '0') || (v[i][j] == '0' && i - 1 >= 0 && v[i - 1][j] == '0') || (v[i][j] == '0' && i + 1 < n && j + 1 < m && v[i + 1][j + 1] == '0') || (v[i][j] == '0' && i - 1 >= 0 && j - 1 >= 0 && v[i - 1][j - 1] == '0') || (v[i][j] == '0' && i + 1 < n && j - 1 >= 0 && v[i + 1][j - 1] == '0') || (v[i][j] == '0' && i - 1 >= 0 && j + 1 < m && v[i - 1][j + 1] == '0'))
                    flag = true;
            }
        }
        if (flag)
        {
            cout << cnt << endl;
        }
        else
        {
            if (cnt == n * m)
            {
                cout << cnt - 2 << endl;
            }
            else
            {
                cout << cnt - 1 << endl;
            }
        }
    }
}