#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;

void solve(int n, int k)
{
    long long int ans = 1;
    for (int i = 0; i < k; i++)
    {
        ans = (ans * n) % MOD;
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        solve(n, k);
    }
}