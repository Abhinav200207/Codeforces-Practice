#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int t;
    cin >> t;
    while (t--)
    {
        unsigned long long int n;
        cin >> n;
        unordered_map<unsigned long long int, unsigned long long int> mp;
        for (unsigned long long int i = 0; i < n; i++)
        {
            unsigned long long int a;
            cin >> a;
            mp[i - a]++;
        }
        unsigned long long int ans = 0;
        for (auto i : mp)
        {
            ans = ans + i.second * (i.second - 1) / 2;
        }
        cout << ans << endl;
    }
}