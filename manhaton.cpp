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
        vector<pair<int, int>> v(n);
        for (int i = 1; i <= n; i++)
        {
            int a, b;
            cin >> a >> b;
            v[i] = make_pair(a, b);
        }
    }
}