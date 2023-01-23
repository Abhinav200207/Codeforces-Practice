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
        vector<long long int> v(n);
        for (long long int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(begin(v), end(v));
        long long int ans = n / 2;
        for (long long int i = 1; i < n; i++)
        {
            if (v[i] != v[i - 1])
                ans = max(ans, (i) * (n - i));
        }
        cout << ans << endl;
    }
}