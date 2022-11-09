#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + k - 1; j <= n; j += k)
            {
                if (v[i + 1] + v[i - 1] < v[j + 1] && v[j - 1])
                {
                    swap(v[i], v[j]);
                }
            }
        }
        int ans = 0;
        for (int i = 1; i < n - k + 1; i++)
        {
            int temp = 0;
            for (int j = i; i < i + k; i++)
            {
                temp += v[i];
            }
            ans = max(ans, temp);
        }
        cout << ans << endl;
    }
}