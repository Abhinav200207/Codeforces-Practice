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
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        if (v[0][0] == 'R')
        {
            cout << "YES" << endl;
        }
        else
        {
            vector<int> milla(n, 0);
            for (int i = 0; i < n; i++)
            {
                int cnt1 = 0;
                for (int j = i + 1; j < n; j++)
                {
                    if (v[j][i] == 'R')
                        cnt1++;
                }
                int cnt2 = 0;
                for (int j = i + 1; j < m; j++)
                {
                    if (v[i][j] == 'R')
                        cnt2++;
                }
                if (cnt1 == 0 && cnt2 != 0)
                {
                    milla[i] = 1;
                }
                else if (cnt1 != 0 && cnt2 != 0)
                {
                    milla[i] = -1;
                }
                else if (cnt1 == 0 && cnt2 == 0)
                {
                    milla[i] = 0;
                }
                if (v[i][i] == 'R')
                {
                    milla[i] = 1;
                }
            }
            int flag = 0;
            for (int i = 0; i < n; i++)
            {
                if (milla[i] == 1)
                {
                    flag = 1;
                    break;
                }
                else if (milla[i] == -1)
                {
                    flag = -1;
                    break;
                }
            }
            flag == 1 ? (cout << "YES") : (cout << "NO");
            cout << endl;
        }
    }
}