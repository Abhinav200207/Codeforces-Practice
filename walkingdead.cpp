#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        vector<int> prefix(n + 1);
        prefix[1] = v[1];
        for (int i = 2; i <= n; i++)
        {
            prefix[i] = v[i] + prefix[i - 1];
        }
        while (q--)
        {
            int a, b, k;
            cin >> a >> b >> k;
            int sum = prefix[a - 1] + prefix[n] - prefix[b] + (b - a + 1) * k;
            if (sum % 2)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
}