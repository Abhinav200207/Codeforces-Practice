#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        if ((n - 1ll) * n >> 1 < m || m < n - 1)
        {
            puts("NO");
            return;
        }
        if (n == 1)
        {
            if (k > 1)
            {
                puts("YES");
            }
            else
            {
                puts("NO");
            }
        }
        else if (m < (n - 1ll) * n >> 1)
        {
            if (k > 3)
            {
                puts("YES");
            }
            else
            {
                puts("NO");
            }
        }
        else if (k > 2)
        {
            puts("YES");
        }
        else
        {
            puts("NO");
        }
    }
}