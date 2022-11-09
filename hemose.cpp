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
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        if (n >= 2 * x)
        {
            cout << "Yes" << endl;
        }
        else
        {
            vector<int> temp(v.begin(), v.end());
            int flag = 1;
            sort(v.begin() + 1, v.end());
            for (int i = n - x + 1; i <= x; i++)
            {
                if (v[i] != temp[i])
                    flag = 0;
            }
            if (flag)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
}