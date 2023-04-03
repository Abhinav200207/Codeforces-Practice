#include <bits/stdc++.h>
using namespace std;

bool fun(unordered_map<long long int, long long int> mp, long long int mid, long long int n)
{
    long long int faltuTime = 0;
    long long int jaruriTime = 0;

    for (long long int i = 1; i <= n; i++)
    {
        if (mp[i] <= mid)
        {
            faltuTime += (mid - mp[i]) / 2;
        }
        else
        {
            jaruriTime += (mp[i] - mid);
        }
    }
    return jaruriTime <= faltuTime;
}

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, m;
        cin >> n >> m;
        vector<long long int> v(m);
        unordered_map<long long int, long long int> mp;
        for (long long int i = 0; i < m; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        long long int l = 0, h = 2 * m;
        while (l < h)
        {
            long long int mid = (l + h) / 2;

            if (fun(mp, mid, n))
            {
                h = mid;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << l << endl;
    }
}