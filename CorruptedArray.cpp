#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<long long int> v(n + 2);
        for (long long int i = 0; i < n + 2; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        cout << endl;
        long long int tot = 0;
        for (long long int i = 0; i < n; i++)
        {
            tot += v[i];
        }
        if (tot == v[n] || tot == v[n + 1])
        {
            for (long long int i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
        else
        {
            vector<long long int> vis(n, 1);
            tot += v[n];
            for (long long int i = 0; i < n; i++)
            {
                tot -= v[i];
                if (tot == v[n + 1])
                {
                    vis[i] = 0;
                    break;
                }
                tot += v[i];
            }
            vector<long long int> ans;
            for (long long int i = 0; i < n; i++)
            {
                if (vis[i] == 1)
                {
                    ans.push_back(v[i]);
                }
            }
            ans.push_back(v[n]);
            if (ans.size() == n)
            {
                for (auto i : ans)
                    cout << i << " ";
                cout << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
}