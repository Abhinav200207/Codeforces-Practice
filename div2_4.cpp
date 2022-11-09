#include <iostream>
#include <stack>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <string>
#include <algorithm>
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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> v;
        int i = 2, j = 3 * n;
        while (i < j)
        {
            v.push_back(make_pair(i, j));
            i += 3;
            j -= 3;
        }
        cout << v.size() << endl;
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i].first << " " << v[i].second << endl;
        }
    }
}