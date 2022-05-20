#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        int count = 0;
        for (int i = 2; i < n; i++)
        {
            if (v[i] > v[i - 1] && v[i] > v[i + 1])
            {
                count++;
                v[i] = v[i - 1];
            }
        }
        cout << count << endl;
        for (int i = 1; i <= n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}

// 5
// 3
// 2 1 2
// 4
// 1 2 3 1
// 5
// 1 2 1 2 1
// 9
// 1 2 1 3 2 3 1 2 1
// 9
// 2 1 3 1 3 1 3 1 3
