#include <bits/stdc++.h>
using namespace std;

int fun(int i, vector<int> v, int n, int k)
{
    if (i == n)
        return k;
    int take = v[i] ^ fun(i + 1, v, n, k);
    int notTake = fun(i + 1, v, n, k);
    return max(take, notTake);
}

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
        cout << fun(0, v, n, k) << endl;
    }
}