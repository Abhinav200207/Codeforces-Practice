#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &u : a)
            cin >> u;
        if (!is_sorted(a.begin(), a.end()))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}