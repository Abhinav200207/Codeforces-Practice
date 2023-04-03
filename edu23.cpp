#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        std::cin >> n >> k;

        int x = 0;
        while ((x + 1) * (x + 2) / 2 <= k)
        {
            x += 1;
        }

        for (int i = 0; i < n; i++)
        {
            if (i < x)
            {
                cout << 2 << " ";
            }
            else if (i == x)
            {
                cout << -2 * x - 1 + 2 * (k - x * (x + 1) / 2) << " ";
            }
            else
            {
                cout << -1000 << " ";
            }
        }
        cout << endl;
    }
}