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
        for (int i = n - 1; i > 0; i-=2)
        {
            if (v[i] < v[i - 1])
            {
                swap(v[i - 1], v[i]);
            }
        }
        if (is_sorted(v.begin(), v.end() - 1))
        {
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
}