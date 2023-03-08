#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            vector<vector<int>> ans;
            int h = 2 * n;
            for (int i = 1; i <= n; i += 2)
            {
                ans.push_back({i + h, i, h});
                h--;
            }
            for (int i = 2; i <= n; i += 2)
            {
                ans.push_back({i + h, i, h});
                h--;
            }
            sort(ans.begin(), ans.end());
            for (int i = 0; i < ans.size(); i++)
            {
                cout << ans[i][1] << " " << ans[i][2] << " ";
                cout << endl;
            }
        }
    }
}