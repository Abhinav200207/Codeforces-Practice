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
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] < 0)
            {
                m[-v[i]]++;
            }
            else
            {
                m[v[i]]++;
            }
        }

        int count = 0;

        for (auto i : m)
        {
            if (i.second > 1 && i.first != 0)
            {
                count += 2;
            }
            else
            {
                count++;
            }
        }
        cout << count << endl;
    }
}

// 3
// 4
// 1 1 2 2
// 3
// 1 2 3
// 2
// 0 0
