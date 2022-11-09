#include <bits/stdc++.h>
using namespace std;

const int mod = 1000000007;

int fun(map<long long int, long long int> map1, map<long long int, long long int> map2)
{
    long long int res = INT_MIN;
    for (auto i1 : map1)
    {
        for (auto i2 : map2)
        {
            if (__gcd(i2.first, i1.first) == 1)
            {
                res = max(res, i2.second + i1.second);
            }
        }
    }
    return res == INT_MIN ? -1 : res;
}

void solve()
{
    long long int n;
    cin >> n;
    map<long long int, long long int> map1;
    map<long long int, long long int> map2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        map1[x] = i + 1;
        map2[x] = map1[x];
    }
    cout << fun(map1, map2) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}