#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t, n, i, j, f;

    cin >> t;

    for (; t--;)
    {
        cin >> n;

        ll a[n];
        ll c[3];
        c[0] = c[1] = c[2] = 0;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];

            if ((a[i] % 10) == 0)
            {
                c[0]++;
            }
            else if ((a[i] % 10) == 5)
            {
                c[0]++;
                a[i] += 5;
            }
            else
            {
                c[2]++;

                while ((a[i] % 10) != 2)
                {
                    a[i] = a[i] + (a[i] % 10);
                }
            }
        }

        if (c[0] == n)
        {
            sort(a, a + n);
            if (a[0] == a[n - 1])
                cout << "Yes\n";
            else
                cout << "No\n";
            continue;
        }
        else
        {
            sort(a, a + n);

            f = 0;

            for (i = 1; i < n; i++)
            {
                if ((a[i] - a[i - 1]) % 20 != 0)
                {
                    f++;
                    break;
                }
            }

            if (f == 0)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
}