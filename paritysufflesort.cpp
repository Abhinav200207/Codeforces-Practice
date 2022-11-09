#include <bits/stdc++.h>
using namespace std;

void funOO(vector<pair<int, int>> &ans, vector<int> v, int n)
{
    ans.push_back({1, n});
    for (int i = 2; i < n; i++)
    {
        if (v[i] % 2 == 0)
            ans.push_back({1, i});
    }
    for (int i = n - 1; i >= 2; i--)
    {
        if (v[i] % 2 == 1)
            ans.push_back({i, n});
    }
}
void funEE(vector<pair<int, int>> &ans, vector<int> v, int n)
{
    ans.push_back({1, n});
    for (int i = 2; i < n; i++)
    {
        if (v[i] % 2 == 1)
            ans.push_back({1, i});
    }
    for (int i = n - 1; i >= 2; i--)
    {
        if (v[i] % 2 == 0)
            ans.push_back({i, n});
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        if (n == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            int a = v[1];
            int b = v[n];
            vector<pair<int, int>> ans;
            if (a % 2 == 0 && b % 2 != 0)
            {
                funEE(ans, v, n);
            }
            else if (a % 2 != 0 && b % 2 == 0)
            {
                funOO(ans, v, n);
            }
            else if (a % 2 != 0 && b & 2 != 0)
            {
                funOO(ans, v, n);
            }
            else
            {
                funEE(ans, v, n);
            }
            cout << ans.size() << endl;
            for (int k = 0; k < ans.size(); k++)
            {
                cout << ans[k].first << " " << ans[k].second << endl;
            }
        }
    }
}