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
        vector<int> v(n);
        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (ans == -1 && v[i] != i)
            {
                ans = v[i];
            }
            if (v[i] != i)
            {
                ans = ans & v[i];
            }
        }
        cout << ans << endl;
    }
}