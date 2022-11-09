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
        int l = -1;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] == v[i + 1])
            {
                l = i;
                break;
            }
        }
        int r = -1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (v[i] == v[i + 1])
            {
                r = i;
                break;
            }
        }
        if (l == r)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << max(1, r - l - 1) << endl;
        }
    }
}