#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void run_test()
{
    int n, i, j, l, r;
    cin >> n;
    if (n == 2)
    {
        cout << "1 3" << endl;
        cout << "4 2" << endl;
        return;
    }
    vector<int> a(n * n);
    for (i = 0; i < n * n; i++)
    {
        a[i] = (i + 1);
    }
    l = 0, r = n * n - 1;
    bool ok = true;
    vector<vector<int>> ans;
    for (i = 0; i < n; i++)
    {
        vector<int> v;
        for (j = 0; j < n; j++)
        {
            if (ok)
            {
                v.push_back(a[l++]);
                ok = false;
            }
            else
            {
                v.push_back(a[r--]);
                ok = true;
            }
        }
        ans.push_back(v);
    }
    if (n % 2 == 0)
    {
        for (i = 1; i < n; i += 2)
        {
            reverse(ans[i].begin(), ans[i].end());
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        run_test();
    return 0;
}