#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "NO";
        return 0;
    }
    vector<int> v(2 * n);
    for (int i = 1; i <= 2 * n; i++)
    {
        if (i % 2 == 0)
        {
            v[i] = 2 * i;
        }
        else
        {
            v[i] = 2 * i - 1;
        }
    }
    cout << "YES" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}