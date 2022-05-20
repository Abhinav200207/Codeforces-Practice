#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, B, x, y;
        cin >> n >> B >> x >> y;
        vector<long long int> v(n + 1, 0);
        for (long long int i = 1; i <= n; i++)
        {
            if (v[i - 1] + x <= B)
            {
                v[i] = v[i - 1] + x;
            }
            else
            {
                v[i] = v[i - 1] - y;
            }
        }
        cout << accumulate(v.begin(), v.end(), 0LL) << endl;
    }
}