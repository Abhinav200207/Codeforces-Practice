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
        int x = (n / 2 + 1);
        vector<int> v;
        for (int i = 1; i <= n && v.size() < n; i++)
        {
            v.push_back(x);
            x++;
            v.push_back(i);
        }
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}