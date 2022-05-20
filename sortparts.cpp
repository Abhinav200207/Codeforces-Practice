#include <bits/stdc++.h>
using namespace std;

int isSorted(vector<int> v, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] > v[n - 1])
        {
            return 1;
        }
    }
    return 0;
}

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
        if (isSorted(v, n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}