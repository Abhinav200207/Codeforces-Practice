#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }

        int ans = 1;

        for (int i = 1; i <= min(n,30); i++)
        {
            bool flag = 0;
            for (int j = 2; j <= i + 1; j++)
            {
                if (v[i] % j != 0)
                {
                    flag = 1;
                }
            }
            if (flag == 0)
            {
                ans = 0;
            }
        }

        if (ans)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}