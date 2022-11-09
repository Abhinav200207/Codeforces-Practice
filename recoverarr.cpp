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
        vector<int> d(n);
        for (int i = 0; i < n; i++)
        {
            cin >> d[i];
        }
        vector<int> a(n);
        a[0] = d[0];
        bool flag = false;
        for (int i = 1; i < n; i++)
        {
            // cout << d[i] << " " << a[i - 1] << endl;
            int x = d[i] + a[i - 1];
            int y = a[i - 1] - d[i];
            // cout << x << " " << y << endl;
            if (x >= 0 && y >= 0)
            {
                if (x == y)
                {
                    a[i] = x;
                }
                else
                {
                    flag = true;
                    break;
                }
            }
            if (x < 0 && y < 0)
            {
                flag = true;
                break;
            }
            if (x >= 0 && y < 0)
            {
                a[i] = x;
            }
            if (y >= 0 && x < 0)
            {
                a[i] = y;
            }
        }
        if (flag)
        {
            cout << -1 << endl;
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}