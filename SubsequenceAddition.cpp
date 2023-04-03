#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<long long int> v(n + 1);
        for (long long int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin() + 1, v.end());
        vector<long long int> pre(n + 1);
        pre[1] = v[1];
        for (long long int i = 2; i <= n; i++)
        {
            pre[i] = v[i] + pre[i - 1];
        }

        if (v[1] != 1)
        {
            cout << "NO\n";
            continue;
        }


        long long int flag = 1;
        for (long long int i = 2; i <= n; i++)
        {
            if (pre[i - 1] < v[i])
            {
                flag = 0;
            }
        }

        if (flag == 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}