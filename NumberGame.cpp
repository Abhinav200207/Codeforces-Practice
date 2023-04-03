#include <bits/stdc++.h>
using namespace std;

#define int long long int

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int k = n; k > 0; k--)
    {
        int i = n - 1, rounds = 0;
        int bobPointer = 0;

        while (rounds < k && bobPointer <= i)
        {
            int flag = 0;
            bobPointer = rounds;

            while (flag == 0 && bobPointer <= i)
            {
                if (v[i] <= k - (rounds + 1) + 1)
                {
                    flag = 1;
                    rounds++;
                }
                i--;
            }
        }

        if (k == rounds)
        {
            cout << k << endl;
            return;
        }
    }
    cout << 0 << endl;
    return;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}