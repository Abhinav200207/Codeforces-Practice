#include <bits/stdc++.h>
using namespace std;

#define int long long int

int lcm(int a, int b)
{
    return (a * b) / __gcd(a, b);
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i];
        }
        int gcdi = a[0] * b[0];
        int ans = 1;
        // cout << "hello\n";

        int lcmi = b[0];

        for (int i = 1; i < n; i++)
        {
            gcdi = __gcd(gcdi, a[i] * b[i]);
            lcmi = lcm(lcmi, b[i]);

            if (gcdi % lcmi != 0)
            {
                ans++;
                gcdi = a[i] * b[i];
                lcmi = b[i];
            }
        }
        cout << ans << endl;
    }
}