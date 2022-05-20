#include <bits/stdc++.h>
using namespace std;

int sum(vector<int> v)
{
    int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }
    return sum;
}

int main()
{
    int n = 8;
    cin >> n;
    if (n % 4 == 0 || n % 4 == 3)
    {
        cout << 0 << endl;
        vector<int> l;
        for (int i = 1; i <= n / 4; i++)
        {
            l.push_back(i);
        }
        for (int i = ((3 * n) / 4) + 1; i <= n; i++)
        {
            l.push_back(i);
        }
        cout << l.size() << " ";
        for (int i = 0; i < l.size(); i++)
        {
            cout << l[i] << " ";
        }
        cout << endl;
    }
    if (n % 4 == 1)
    {
        cout << 1 << endl;
        vector<int> l;
        for (int i = 1; i <= n / 4 + 1; i++)
        {
            l.push_back(i);
            // cout << i << " ";
        }
        for (int i = ((3 * n) / 4) + 2; i <= n; i++)
        {
            l.push_back(i);
            // cout << i << " ";
        }
        cout << l.size() << " ";
        for (int i = 0; i < l.size(); i++)
        {
            cout << l[i] << " ";
        }
        cout << endl;
    }
    if (n % 4 == 2)
    {
        cout << 1 << endl;
        vector<int> l;
        for (int i = 1; i <= n; i++)
        {
            if (i % 4 == 1 || i % 4 == 0)
            {
                l.push_back(i);
            }
        }
        cout << l.size() << " ";
        for (int i = 0; i < l.size(); i++)
        {
            cout << l[i] << " ";
        }
        cout << endl;
    }
}