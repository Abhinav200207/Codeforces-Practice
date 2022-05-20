#include <bits/stdc++.h>
using namespace std;

long long n, a[5005], ans = 1e18;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int pos = 1; pos <= n; pos++)
    {
        long long prev = 0, sum = 0;
        for (int i = pos - 1; i >= 1; i--)
        {
            prev += a[i] - prev % a[i];
            sum += prev / a[i];
        }
        prev = 0;
        for (int i = pos + 1; i <= n; i++)
        {
            prev += a[i] - prev % a[i];
            sum += prev / a[i];
        }
        ans = min(ans, sum);
    }
    cout << ans << "\n";
    return 0;
}