#include <bits/stdc++.h>
using namespace std;

int divBhai(int n)
{
    int cnt = 0;
    while (n % 2 == 0)
    {
        cnt++;
        n = n / 2;
    }
    return cnt;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int req = n;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];

            if (v[i] % 2 == 0)
            {
                int x = divBhai(v[i]);
                req = req - x;
            }
        }
        // cout << req << endl;
        if (req < 0)
        {
            cout << 0 << endl;
        }
        else
        {
            int ans = 0;
            vector<int> v2;
            for (int i = n; i >= 1; i--)
            {
                if (i % 2 == 0)
                {
                    v2.push_back(divBhai(i));
                }
            }
            int x = 0;
            sort(v2.begin(), v2.end(), greater<int>());
            // for (int i = 0; i < v2.size(); i++){
            //     cout   << v2[i] << " ";
            // }
            // cout << endl;
            while (req > 0 && x < v2.size())
            {
                req -= v2[x];
                x++;
                ans++;
            }
            if (req > 0)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << ans << endl;
            }
        }
    }
}