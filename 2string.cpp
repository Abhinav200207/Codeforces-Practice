#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<string> v(n);
        for (long long int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long int ans = 0;
        map<string, long long int> s;
        map<char, long long int> l, r;
        for (long long int i = 0; i < n; i++)
        {
            ans += l[v[i][0]] + r[v[i][1]] - 2 * s[v[i]];
            s[v[i]]++;
            l[v[i][0]]++;
            r[v[i][1]]++;
        }
        cout << ans << endl;
    }
}