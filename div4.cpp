#include <bits/stdc++.h>
using namespace std;

int fun(int sumnum, int s, int i, int j, int op, vector<int> v, map<pair<int, int>, int> mp)
{
    if (sumnum == s)
    {
        return op;
    }
    if (mp.find(make_pair(i, j)) != mp.end())
    {
        return op;
    }
    op++;
    mp[make_pair(i, j)] = min(fun(sumnum - v[i], s, i + 1, j, op, v, mp), fun(sumnum - v[j], s, i, j - 1, op, v, mp));
    return mp[make_pair(i, j)];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int sumnum = accumulate(v.begin(), v.end(), 0);
        if (sumnum < s)
        {
            cout << -1 << endl;
            continue;
        }
        map<pair<int,int>,int> mp;
        int i = 0, j = n - 1;
        cout << fun(sumnum, s, i, j, 0, v,mp) << endl;
    }
}