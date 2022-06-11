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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        int s = 0;
        int d = 0;
        for (auto i : mp)
        {
            if (i.second > 1)
            {
                d++;
            }
            else
            {
                s++;
            }
        }
        cout << d + (s + 1) / 2 << endl;
    }
}