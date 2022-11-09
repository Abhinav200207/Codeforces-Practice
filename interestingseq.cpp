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
        if (m % n == 0)
        {
            cout << "YES" << endl;
            // int x = m/n;
            for (int i = 0; i < n - 1; i++)
            {
                cout << 1 << " ";
            }
            cout << m - (n - 1) << endl;
        }else
        {
            cout << "NO" << endl;
        }
    }
}