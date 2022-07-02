#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        int arth = 0;
        int temp = v[i];
        for (int j = 0; j < n; j++)
        {
            arth += v[j];
        }
        if ((arth - v[i]) == v[i] * (n - 1))
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}