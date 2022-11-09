#include <bits/stdc++.h>
using namespace std;

// 8
// 1 6 3 100
// 3 6 3 12
// 3 6 3 19
// 5 4 7 38
// 5 4 7 80
// 99978 1000000000 100000000 1000000000000000000
// 1 1 0 0
// 4 1000000000 1000000000 1000000000000000000

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, b, s;
        cin >> n >> k >> b >> s;
        if (s < k * b || s > k * b + n * (k - 1))
        {
            cout << -1 << endl;
        }
        else
        {
            cout << k * b << " ";
            s = s - k * b;
            int x = 0;
            while (s - (k - 1) > 0)
            {
                s = s - (k - 1);
            }
            for (int i = 0; i < x; i++)
            {
                cout << k - 1 << " ";
            }
            cout << s << " ";
            for (int i = 0; i < n - 1 - x; i++)
            {
                cout << 0 << " ";
            }
            cout << endl;
        }
    }
}