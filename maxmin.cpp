#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        if (a - b > 1 || b - a > 1 || a + b + 2 > n)
        {
            cout << -1 << endl;
            continue;
        }
        else
        {
            int x;
            if (a > b)
            {
                x = a + b + 1;
                for (int i = 1; i <= n - x; i++)
                    cout << i << " ";
                for (int i = n - x + 1; i <= n; i += 2)
                {
                    cout << i + 1 << " " << i << " ";
                }
                cout << "\n";
            }
            else if (b > a)
            {
                x = a + b + 1;
                for (int i = 1; i <= x; i += 2)
                {
                    cout << i + 1 << " " << i << " ";
                }
                for (int i = x + 1; i <= n; i++)
                {
                    cout << i << " ";
                }
                cout << "\n";
            }
            else
            {
                x = a + b;
                for (int i = 1; i <= x; i += 2)
                {
                    cout << i + 1 << " " << i << " ";
                }
                for (int i = x + 1; i <= n - 2; i++)
                {
                    cout << i << " ";
                }
                cout << n << " " << n - 1 << " ";
                cout << "\n";
            }
        }
    }
}
// EILSEQ;