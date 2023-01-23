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
        vector<int> ans(n + 1, -1);
        int temp = 1;
        for (int i = 1; i <= n; i++)
        {
            if (i % k == 0)
            {
                ans[i] = temp++;
            }
        }
        temp = n;
        for (int i = 1; i <= n; i++)
        {
            if (ans[i] == -1)
            {
                ans[i] = temp--;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}