#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        int sumnum = 0;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sumnum += v[i];
            if (v[i] % x == 0)
            {
                flag++;
            }
        }
        if (flag == n)
        {
            cout << "-1" << endl;
            continue;
        }
        if (sumnum % x != 0)
        {
            cout << n << endl;
            continue;
        }
        int count1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] % x != 0)
            {
                break;
            }
            count1++;
        }
        int count2 = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] % x != 0)
            {
                break;
            }
            count2++;
        }
        cout << max(n - count1 - 1,n - count2 - 1) << endl;
    }
}