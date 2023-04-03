#include <iostream>
#include <stack>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <string>
#include <algorithm>
#include <bits/stdc++.h>
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

    void getInput(vector<int> &v, int n)
    {
        pair<int, int> p;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            p = {a, a};
            v[i] = p.first;
            if (p.second < 1)
            {
                addBhai(10);
                // cout << addB << endl;
            }
        }
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
        vector<int> v(2);
        // getInput(v, n);
        unsigned long long int n;
        cin >> n;
        unsigned long long int abc = sqrtl(n - 1);
        cout << abc << endl;

        // int addB = addBhai(10);
        // // cout << addB << endl;
        int subB = subBhai(3);
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