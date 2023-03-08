#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v(n, vector<int>(m, 0));
        vector<int> sum(n, 0);
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> v[i][j];
                sum[i] += v[i][j];
            }
        }
        int tot = 0;
        for (int i = 0; i < n; ++i)
            tot += sum[i];
        if (tot % n)
        {
            cout << "-1";
            continue;
        }
        tot /= n;
        vector<vector<int>> ans;
        vector<int> Vg, Vl;
        Vg.reserve(n), Vl.reserve(n);
        for (int j = 0; j < m; ++j)
        {
            for (int i = 0; i < n; ++i)
            {
                if (sum[i] > tot && v[i][j])
                    Vg.push_back(i);
                if (sum[i] < tot && !v[i][j])
                    Vl.push_back(i);
            }
            for (int i = 0; i < (int)min(Vl.size(), Vg.size()); ++i)
            {
                ++sum[Vl[i]], --sum[Vg[i]];
                ans.push_back({Vl[i], Vg[i], j});
            }
            Vl.clear(), Vg.clear();
        }
        cout << (int)ans.size() << "\n";
        for (auto i : ans)
            cout << i[0] + 1 << " " << i[1] + 1 << " " << i[2] + 1 << "\n";
    }
    return 0;
}