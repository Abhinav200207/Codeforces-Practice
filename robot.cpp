#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, x;
        cin >> n >> x;
        vector<pair<long long int, long long int>> v(n);
        for (long long int i = 0; i < n; i++)
        {
            long long int a;
            cin >> a;
            v[i] = make_pair(a, 1);
        }
        long long int i = 0;
        while (v[i].first % x == 0)
        {
            v.push_back(make_pair(v[i].first / x, x * v[i].second));
            i++;
        }
        long long int sum = 0;
        for (long long int i = 0; i < v.size(); i++)
        {
            // sum += v[i].first * v[i].second;
            cout << v[i].first << " " << v[i].second << endl;
        }
        cout << sum << endl;
    }
}

// 2
// 1 2
// 12
// 4 2
// 4 6 8 2
