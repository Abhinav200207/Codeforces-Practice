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
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        if (n % 2 == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        sort(v.begin(), v.end());
        vector<int> v1;
        vector<int> v2;
        for (int i = 1; i <= n / 2; i++)
        {
            // cout << v[i] << " ";
            v1.push_back(v[i]);
        }
        cout << endl;
        for (int i = n / 2 + 1; i <= n; i++)
        {
            // cout << v[i] << " ";
            v2.push_back(v[i]);
        }
        cout << endl;
        for (int i = 0; i < v1.size(); i++)
        {
            cout << v1[i] << " " << v2[i] << " ";
        }
    }
}