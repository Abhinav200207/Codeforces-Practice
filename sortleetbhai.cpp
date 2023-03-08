#include <bits/stdc++.h>
using namespace std;

int t, n, w, h;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> t;
    while (t--)
    {
        cin >> n >> w >> h;
        vector<int> c(n), d(n);
        for (int i = 0; i < n; i++)
            cin >> c[i];
        for (int i = 0; i < n; i++)
            cin >> d[i];
        sort(c.begin(), c.end());
        sort(d.begin(), d.end());
        vector<int> x(n);
        for (int i = 0; i < n; i++)
            x[i] = d[i] - c[i];
        if (*max_element(x.begin(), x.end()) - *min_element(x.begin(), x.end()) <= 2 * (w - h))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}