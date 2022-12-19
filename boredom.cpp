#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    vector<long long int> v(n);
    map<long long int, long long int> mp;
    for (long long int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]] += v[i];
    }

    vector<pair<long long int, long long int>> arr;
    sort(arr.begin(), arr.end());
    for (auto i : mp)
    {
        arr.push_back({i.first, i.second});
    }

    vector<long long int> dp(arr.size() + 1, 0);
    dp[0] = 0;
    dp[1] = arr[0].second;

    for (long long int i = 2; i <= arr.size(); i++)
    {
        if (arr[i - 1].first - arr[i - 2].first <= 1)
        {
            dp[i] = max(dp[i - 1], dp[i - 2] + arr[i - 1].second);
        }
        else
        {
            dp[i] = arr[i - 1].second + max(dp[i - 1], dp[i - 2]);
        }
    }
    cout << dp[arr.size()] << endl;
    return 0;
}