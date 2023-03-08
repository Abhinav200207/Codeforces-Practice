#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        map<int, set<int>> mp;

        while (q--)
        {
            int check;
            cin >> check;

            if (check == 1)
            {
                int left, right;
                cin >> left >> right;
                mp[left].insert(right);
            }
            else
            {
                int x;
                cin >> x;


                auto it = mp.lower_bound(x);
            }
        }
    }
}