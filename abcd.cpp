#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int ans = 0;
    for (int j = 0; j < k; j++)
    {
        if (s[j] == 'W')
        {
            ans++;
        }
    }
    int prev = ans;
    for (int i = 1; i < n - k + 1; i++)
    {
        if (s[i - 1] == 'W' && s[i + k - 1] == 'B')
        {
            prev--;
        }
        if (s[i - 1] == 'B' && s[i + k - 1] == 'W')
        {
            prev++;
        }
        ans = min(prev, ans);
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}