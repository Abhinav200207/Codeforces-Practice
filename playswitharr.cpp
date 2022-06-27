#include <bits/stdc++.h>
using namespace std;

pair<long long int, long long int> util(long long int n, long long int m)
{
    vector<long long int> result;
    long long int temp = n;
    while (n % m == 0)
    {
        n = n / m;
    }
    return {n, temp / n};
}

vector<pair<long long int, long long int>> split(vector<long long int> v, long long int m)
{
    vector<pair<long long int, long long int>> res;
    for (long long int i = 0; i < v.size(); i++)
    {
        res.push_back(util(v[i], m));
    }
    return res;
}

// void prlong long intvector(vector<pair<long long int, long long int>> v)
// {
//     for (long long int i = 0; i < v.size(); i++)
//     {
//         cout << "Yo: " << v[i].first << " " << v[i].second << " ";
//     }
//     cout << endl;
// }

vector<pair<long long int, long long int>> solve(vector<long long int> v, long long int m)
{
    vector<pair<long long int, long long int>> sl = split(v, m);
    vector<pair<long long int, long long int>> res;
    res.push_back(sl[0]);
    // prlong long intvector(sl);
    for (long long int i = 1; i < sl.size(); i++)
    {
        if (sl[i].first == res[res.size() - 1].first)
        {
            res[res.size() - 1] = make_pair(sl[i].first, sl[i].second + res[res.size() - 1].second);
        }
        else
        {
            res.push_back(sl[i]);
        }
    }
    // prlong long intvector(res);
    return res;
}



int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, m, x;
        cin >> n >> x;
        vector<long long int> a(n);
        for (long long int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cin >> m;
        vector<long long int> b(m);
        for (long long int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        if (solve(a, x) == solve(b, x))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        // cout << endl;
        // cout << endl;
        // cout << endl;
        // cout << endl;
    }
}

// 1
// 5 2
// 1 2 2 4 2
// 4
// 1 4 4 2