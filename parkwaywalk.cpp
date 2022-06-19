#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, q;
    cin >> n >> q;
    vector<long long int> v(n + 1);
    for (long long int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin() + 1, v.end(), greater<long long int>());
    for (long long int i = 2; i <= n; i++)
    {
        v[i] += v[i - 1];
    }
    for (long long int i = 0; i < q; i++)
    {
        long long int x, y;
        cin >> x >> y;
        cout << v[x] - v[x - y] << endl;
    }
}