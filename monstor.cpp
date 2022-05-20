#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<pair<long long int, long long int>> v(n);
        long long int minpower = INT64_MAX, minexpo, index;
        for (long long int i = 0; i < n; i++)
        {
            long long int a, b;
            cin >> a >> b;
            v[i] = make_pair(a, b);
            if (a < minpower)
            {
                minpower = a;
                index = i;
                minexpo = b;
            }
        }
        // cout << minpower << "  " << minexpo << index << endl;
        int count = 0;
        int i = index;
        do
        {
            count += v[i % n].first;
            if (v[i % n + 1].first > v[i % n].second)
            {
                v[i % n + 1].first -= v[i % n].second;
            }
            if (v[i % n + 1].first <= v[i % n].second)
            {
                v[i % n + 1].first = 0;
            }
            cout << v[i % n].first << endl;
            // cout << i % n << endl;
            i = i % n;
            i++;
        } while (i != index);
        cout << count << endl;
    }
}
// 3
// 7 15
// 2 14
// 5 3

// 6
// 3 5
// 7 13
// 4 8
// 1 7
// 9 6
// 4 10