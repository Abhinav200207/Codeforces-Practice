#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, w;
        cin >> n >> w;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        int c = 0;
        int i = 1;
        vector<int> ans;
        while (i <= n)
        {
            c += v[i];
            if (c > w)
            {
                c -= v[i];
                i++;
                continue;
            }
            ans.push_back(i);
            i++;
        }
        if (c < w / 2)
        {
            cout << -1 << endl;
            continue;
        }
        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}

// 3
// 1 3
// 3
// 6 2
// 19 8 19 69 9 4
// 7 12
// 1 1 1 17 1 1 1
