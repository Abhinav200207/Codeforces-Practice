#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    unordered_map<int,int> mp;
    for (auto i : v)
    {
        mp[i]++;
    }
    sort(v.begin(), v.end());
    int maxi = v[n - 1] - v[0];
    int cnt = 0;
    map<pair<int,int>,int> mp1;
    for (auto i : v)
    {
        if (mp.find(i - maxi) != mp.end()){
            if (mp1.find({i,i - maxi}) == mp1.end() || mp1.find({i - maxi,i}) == mp1.end()){
                cnt++;
                mp1[{i,i - maxi}];
                mp[i]
            }
        }
        if (mp.find(i + maxi) != mp.end())
            cnt++;
    }
    cout << maxi << " " << cnt << endl;
}
