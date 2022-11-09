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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int cnt = 0;
        int l = 0, r = n - 1;
        while (l < r)
        {
            if (v[r] == 0 && l < r)
            {
                while (v[l] != 1 && l < r)
                {
                    l++;
                }
                if (l < r)
                {
                    cnt++;
                    swap(v[l], v[r]);
                }
            }
            r--;
        }
        cout << cnt << endl;
    }
}