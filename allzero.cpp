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
        vector<int> v(n);
        int zcnt = 0;
        int minnum = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 0)
                zcnt++;
            minnum = min(minnum, v[i]);
        }
        int flag = 0;
        sort(v.begin(), v.end());
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] == v[i + 1])
            {
                flag = 1;
            }
        }
        if (zcnt)
        {
            cout << n - zcnt << endl;
        }
        else if (flag)
        {
            cout << n << endl;
        }
        else
        {
            cout << n + 1 << endl;
        }
    }
}