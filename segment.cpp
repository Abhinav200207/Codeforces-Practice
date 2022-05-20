#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define forn(i, n) for (int i = 0; i < int(n); i++)

struct point
{
    int weight, position, id;
};

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<point> points(m);

    forn(i, m)
    {
        cin >> points[i].position >> points[i].weight;
        points[i].id = i + 1;
    }

    sort(points.begin(), points.end(), [](point a, point b)
         { return a.weight < b.weight; });

    int sum = 0;
    forn(i, m)
    {
        if (i < 2 * n)
            sum += points[i].weight;
        else
            points.pop_back();
    }

    sort(points.begin(), points.end(), [](point a, point b)
         { return a.position < b.position; });

    cout << sum << endl;
    forn(i, n)
    {
        cout << points[i].id << ' ' << points[2 * n - i - 1].id << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}