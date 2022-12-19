#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int mx = ceil(n / k);
        if (*max_element(v.begin(), v.end()) > mx)
        {
            cout << "NO" << endl;
        }
        else
        {
            int cnt = 0;
            for (int i = 0; i < n; i++)
            {
                if (mx == v[i])
                    cnt++;
            }
            if (cnt > n % k)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
}
