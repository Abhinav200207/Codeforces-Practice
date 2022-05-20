#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 1; i <= n; i++)
        {
            arr[i] = arr[i] % 3;
        }
        set<int> s;
        int res = 0;
        for (int i = 1; i <= n; i++)
        {
            s.insert(arr[i]);
        }
        if (s.size() <= 2)
        {
            res = 1;
        }
        for (auto i : s)
        {
            if (i == 1 && s.size() == 2)
            {
                res = 0;
            }
        }
        if (res == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}