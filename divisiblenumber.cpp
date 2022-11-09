#include <bits/stdc++.h>
using namespace std;

bool solve()
{
    int a, c, b, d;
    cin >> a >> b >> c >> d;
    // (a --> c] and (b --> d] && a*b
    vector<pair<int, int>> adiv;
    vector<pair<int, int>> bdiv;

    for (int i = 1; i * i <= a; ++i)
    {
        if (a % i == 0)
        {
            adiv.push_back({i, a / i});
            adiv.push_back({a / i, i});
        }
    }

    for (int i = 1; i * i <= b; ++i)
    {
        if (b % i == 0)
        {
            adiv.push_back({i, b / i});
            adiv.push_back({b / i, i});
        }
    }

    for (auto i : adiv)
    {
        for (auto j : bdiv)
        {
            int a1 = i.first, a2 = i.second;
            int b1 = j.first, b2 = j.second;

            int x = a1 * b1, y = a2 * b2;
            int k1 = (a / x) + 1, k2 = (b / y) + 1;

            if (k1 * x <= c && k2 * y <= d)
            {
                cout << "Hello" << endl;
                cout << k1 * x << " " << k2 * y << endl;
                return true;
            }
        }
    }

    cout << -1 << " " << -1 << endl;
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        if (solve())
        {
        }
        else
        {
            cout << "-1 -1" << endl;
        }
    }
}