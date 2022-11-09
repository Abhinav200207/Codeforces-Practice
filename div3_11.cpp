#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    long long int n;
    cin >> n;
    vector<long long int> v(n);
    for (long long int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    unordered_map<long long int, pair<int, vector<long long int>>> mp;
    for (long long int i = 0; i < n; i++)
    {
        long long int curr_sum = 0;
        for (long long int j = i; j < n; j++)
        {
            curr_sum += v[j];
            if (mp.find(curr_sum) == mp.end())
            {
                mp.insert({curr_sum, {j, {j - i + 1}}});
            }
            else if (i > mp[curr_sum].first)
            {
                mp[curr_sum].first = j;
                mp[curr_sum].second.push_back(j - i + 1);
            }
        }
    }
    long long int ans = INT_MAX;
    long long int sumnum = accumulate(v.begin(), v.end(), 0LL);
    for (auto i : mp)
    {
        if (i.first * i.second.second.size() == sumnum && accumulate(i.second.second.begin(), i.second.second.end(), 0LL) == n)
        {
            ans = min(ans, *max_element(i.second.second.begin(), i.second.second.end()));
        }
    }
    cout << ans << endl;
}

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}