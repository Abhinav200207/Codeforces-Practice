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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int res = 0, curr = 1;
        sort(v.begin(), v.end(), greater<int>());
        for (auto i : v)
        {
            if (curr * i >= k)
            {
                res++;
                curr = 0;
            }
            curr++;
        }
        cout << res << endl;
    }
}