#include <bits/stdc++.h>
using namespace std;

int fun(int s, int e, vector<int> pre)
{
    return pre[e] - (s ? pre[s - 1] : 0);
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, sumnum;
        cin >> n >> sumnum;
        vector<int> v(n);
        vector<int> pre(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (i)
                pre[i] = pre[i - 1] + v[i];
            if (!i)
            {
                pre[i] = v[i];
            }
        }

        int ans = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            int s = i, e = n - 1, pos = -1;
            while (s < e)
            {
                int mid = (s + e) >> 1;
                if (fun(i, mid, pre) <= sumnum)
                {
                    pos = mid;
                    s = mid - 1;
                }
                else
                {
                    e = mid + 1;
                }
            }
            if (pos == -1 || fun(i, pos, pre) != sumnum)
                continue;
            ans = min(ans, n - (pos - i + 1));
        }
        cout << (ans == INT_MAX ? -1 : ans) << endl;
    }
}