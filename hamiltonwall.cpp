#include <bits/stdc++.h>
using namespace std;
#define ll long long
void start(ll r, ll c, ll m, string a[], bool v[][200001], ll *b)
{
    v[r][c] = true;

    (*b)++;

    if (r == 0)
    {
        if (a[1][c] == 'B' && v[1][c] == false)
        {
            start(1, c, m, a, v, b);
        }
        else if (c + 1 < m)
        {
            if (a[0][c + 1] == 'B')
            {
                start(0, c + 1, m, a, v, b);
            }
        }
    }
    else
    {
        if (a[0][c] == 'B' && v[0][c] == false)
        {
            start(0, c, m, a, v, b);
        }
        else if (c + 1 < m)
        {
            if (a[1][c + 1] == 'B')
            {
                start(1, c + 1, m, a, v, b);
            }
        }
    }
}
int main()
{
    ll t, m, i, j, b1, b2;
    string a[2], ans;

    cin >> t;

    for (; t--;)
    {
        b1 = b2 = 0;

        ans = "NO";

        cin >> m;

        bool v[2][200001];

        cin >> a[0];
        cin >> a[1];

        for (i = 0; i < m; i++)
        {
            v[0][i] = v[1][i] = false;
        }

        for (i = 0; i < m; i++)
        {
            if (a[0][i] == 'B')
            {
                b1++;
            }

            if (a[1][i] == 'B')
            {
                b1++;
            }
        }

        for (i = 0; i < m; i++)
        {
            if (a[0][i] == 'B' && a[1][i] == 'B')
            {
                b2 = 0;

                start(0, i, m, a, v, &b2);

                if (b1 == b2)
                {
                    ans = "YES";
                }

                for (j = 0; j < m; j++)
                {
                    v[0][j] = v[1][j] = false;
                }

                b2 = 0;
                start(1, i, m, a, v, &b2);

                if (b1 == b2)
                {
                    ans = "YES";
                }

                break;
            }
            else if (a[0][i] == 'B')
            {
                b2 = 0;

                start(0, i, m, a, v, &b2);

                if (b1 == b2)
                {
                    ans = "YES";
                }

                break;
            }
            else if (a[1][i] == 'B')
            {
                b2 = 0;

                start(1, i, m, a, v, &b2);

                if (b1 == b2)
                {
                    ans = "YES";
                }

                break;
            }
        }

        cout << ans << "\n";
    }
}