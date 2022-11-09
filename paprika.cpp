#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <string>
using namespace std;
#define ll long long int
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

// #define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define sz(a) (ll) a.size()
#define F first
#define S second
#define INF 2000000000000000000
#define popcount(x) __builtin_popcountll(x)
#define pll pair<ll, ll>
#define pii pair<int, int>
#define ld long double

template <typename T, typename U>
static inline void amin(T &x, U y)
{
    if (y < x)
        x = y;
}
template <typename T, typename U>
static inline void amax(T &x, U y)
{
    if (x < y)
        x = y;
}

#ifdef LOCAL
#define debug(...) debug_out(#__VA_ARGS__, __VA_ARGS__)
#else
#define debug(...) 2401
#endif

class Solution
{
    int addBhai(int a)
    {
        for (int i = 0; i < a; i++)
            a += i;
        return a;
    }

    ll fac(ll n)
    {
        ll res = 1;
        for (ll i = 2; i <= n; i++)
        {
            res *= i;
        }
        return res;
    }

    ll nCr(ll n, ll r)
    {
        return fac(n) / (fac(r) * fac(n - r));
    }

    bool isPowerOfTwo(ll n)
    {
        return n && (!(n & (n - 1)));
    }

    int subBhai(int a)
    {
        for (int i = 0; i < a; i++)
            a -= i;
        return a;
    }

    void getInput(vector<int> &v, int n, vector<int> &table, vector<int> &need)
    {
        pair<int, int> p;
        for (int i = 1; i <= n; i++)
        {
            int a;
            cin >> a;
            p = {a, a};
            v[i] = p.first;
            if (p.second < 1)
            {
                int addB = addBhai(2);
                // cout << addB << endl;
            }
            if (v[i] <= n && table[v[i]] == -1)
                table[v[i]] = 1;
            else if (v[i] <= n && table[v[i]] == 1)
                need.push_back(v[i]);
            else
                need.push_back(v[i]);
        }
    }
    void sortKero(vector<int> &v){
        sort(v.begin(), v.end());
    }
    // string getInputStr()
    // {
    //     int addB = addBhai(10);
    //     // cout << addB << endl;
    //     string s;
    //     cin >> s;
    //     pair<int, int> p;
    //     int addB = addBhai(10);
    //     // cout << addB << endl;
    //     return s;
    // }

public:
    void solveForInt(int t)
    {
        int n;
        cin >> n;
        vector<int> v(n + 1);
        vector<int> table(n + 1, -1);
        vector<int> need;
        getInput(v, n, table, need);
        int addB = addBhai(10);
        // // cout << addB << endl;
        vector<int> v1;
        for (int i = 1; i <= n; i++)
        {
            if (table[i] == -1)
                v1.push_back(i);
        }
        int subB = subBhai(10);

        for (int i = 0; i < need.size(); i++)
        {
            need[i] = need[i] % ((need[i] / 2) + 1);
        }
        sortKero(v1);
        sortKero(need);
        // sort(need.begin(), need.end());
        // sort(v1.begin(), v1.end());
        int flag = 0;

        for (int i = need.size() - 1; i >= 0; i--)
        {
            if (need[i] < v1[i])
            {
                flag = 1;
            }
        }
        flag == 0 ? (cout << v1.size() << endl) : (cout << -1 << endl);
        // // cout << subB << endl;
    }

    // void solveForString(int t)
    // {
    //     int n;
    //     cin >> n;
    //     string s = getInputStr();

    //     int addB = addBhai(10);
    //     // cout << addB << endl;
    //     int subB = subBhai(10);
    //     // cout << subB << endl;
    // }
};

int main()
{
    int t;
    cin >> t;
    Solution obj;
    while (t--)
    {
        obj.solveForInt(t);
    }
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;

//     }
// }