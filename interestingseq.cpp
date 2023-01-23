#include <bits/stdc++.h>
using namespace std;

long long int find_and(long long int l, long long int r)
{
    long long int shift = 0;
    while (l != r)
    {
        l = l >> 1;
        r = r >> 1;
        shift++;
    }
    return (l << shift);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, x, ans = -1;
        cin >> n >> x;

        long long int left = n, right = 5e18;

        while (left <= right)
        {
            long long int mid = (left + right) / 2;
            long long int bitwiseAND = find_and(n, mid);
            if (bitwiseAND <= x)
            {
                if (bitwiseAND == x)
                    ans = mid;
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        cout << ans << endl;
    }
}