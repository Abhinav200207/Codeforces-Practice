#include <bits/stdc++.h>
using namespace std;

int sortKeroBhaiIssa(vector<int> &v, int l, int r)
{
    if (l + 1 == r)
        return 0;
    int mid = (l + r) >> 1;
    int maxL = *max_element(v.begin() + l, v.begin() + mid);
    int maxR = *max_element(v.begin() + mid, v.begin() + r);
    int ans = 0;
    if (maxL > maxR)
    {
        ans++;
        for (int i = 0; i < (mid - l); ++i)
            swap(v[l + i], v[mid + i]);
    }
    return ans + sortKeroBhaiIssa(v, l, mid) + sortKeroBhaiIssa(v, mid, r);
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ans = sortKeroBhaiIssa(v, 0, n);
    if (is_sorted(v.begin(), v.end()))
    {
        cout << ans << endl;
        return;
    }
    cout << -1 << endl;
    return;
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