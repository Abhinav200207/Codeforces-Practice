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
        if (n % 2 == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            vector<int> v(n + 1, 0);
            cout << "YES" << endl;
            for (int i = 1; i <= n; i += 2)
            {
                v[i] = 5;
            }
            for (int i = 2; i <= n; i += 2)
            {
                v[i] = -5;
            }
            for (int i = 1; i <= n; i += 1)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }
}