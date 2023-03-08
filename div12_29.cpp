#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t, i, j, ans, c, f, sum, n;
    cin >> t;

    queue<pair<ll, ll>> q1, q2;

    while (t--)
    {
        ans = 0;
        cin >> n;

        for (i = 2; i * i <= n; i++)
        {
            if ((n % i) == 0)
            {
                c = 0;
                f = i;

                while ((n % i) == 0)
                {
                    n /= i;
                    c++;
                }

                q1.push({i, c});
            }
        }
        if (n > 1)
        {
            q1.push({n, 1});
        }

        while (q1.size())
        {
            long long int x = 1;
            while (q1.size())
            {
                x = x * q1.front().first;
                q1.front().second--;
                if (q1.front().second)
                {
                    q2.push(q1.front());
                }
                q1.pop();
            }
            ans += x;

            while (q2.size())
            {
                q1.push(q2.front ());
                q2.pop();
            }
        }

        cout << ans << "\n";
    }
}