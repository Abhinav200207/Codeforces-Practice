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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        set<int> st1, st2;
        for (int i = 0; i < n; i++)
        {
            st1.insert(i + 1);
            st2.insert(i + 1);
        }
        int flag = 1;
        vector<int> v1(n, -1), v2(n, -1);
        for (int i = 0; i < n; i++)
        {
            if (st1.find(v[i]) != st1.end())
            {
                v1[i] = v[i];
                v2[i] = 0;
                st1.erase(v[i]);
            }
            else if (st2.find(v[i]) != st2.end())
            {
                v1[i] = 0;
                v2[i] = v[i];
                st2.erase(v[i]);
            }
            else
            {
                flag = 0;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (v1[i] != 0)
            {
                auto idx = st2.upper_bound(v1[i]);
                if (idx == st2.begin())
                {
                    flag = 0;
                    break;
                }
                v2[i] = *(--idx);
                st2.erase(idx);
            }
            else if (v2[i] != 0)
            {
                auto idx = st1.upper_bound(v2[i]);
                if (idx == st1.begin())
                {
                    flag = 0;
                    break;
                }
                v1[i] = *(--idx);
                st1.erase(idx);
            }
        }
        if (flag == 0)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << v1[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            cout << v2[i] << " ";
        }
        cout << endl;
    }
}