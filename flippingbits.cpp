#include <bits/stdc++.h>
using namespace std;

void fun(vector<int> v, string s, int n, int k)
{
    if (k % 2 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 != 0)
            {
                s[i] = s[i] == '1' ? '0' : '1';
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 == 0)
            {
                s[i] = s[i] == '1' ? '0' : '1';
            }
        }
    }
    cout << s << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> v(n, 0);
        int x = k;
        if (k % 2)
        {
            for (int i = 0; i < n; i++)
            {
                if (k == 0)
                {
                    break;
                }
                if (s[i] == '1')
                {
                    k--;
                    v[i] = 1;
                }
            }
            v[n - 1] += k;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (k == 0)
                {
                    break;
                }
                if (s[i] == '0')
                {
                    k--;
                    v[i] = 1;
                }
            }
            v[n - 1] += k;
        }
        fun(v, s, n, x);
    }
    return 0;
}