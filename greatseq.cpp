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
        vector<long long int> v(n);
        map<long long int, long long int> mp;
        for (long long int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        sort(v.begin(), v.end());
        long long int cnt = 0;
        for (long long int i = 0; i < n; i++)
        {
            if (mp.find(v[i]) != mp.end())
            {
                if ((mp.find(x * v[i]) != mp.end()))
                {
                    mp[v[i]]--;
                    mp[v[i] * x]--;
                    if (mp[v[i]] == 0)
                        mp.erase(v[i]);
                    if (mp[v[i] * x] == 0)
                        mp.erase(v[i] * x);
                }
                else
                {
                    mp[v[i]]--;
                    if (mp[v[i]] == 0)
                        mp.erase(v[i]);
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
}