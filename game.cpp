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
        int index2 = 0;
        int index = 0;
        for (int i = 1; i <= n; i++)
        {
            if (v[i] == 0)
            {
                index = i - 1;
                break;
            }
        }
        for (int i = n; i >= 1; i--)
        {
            if (v[i] == 0)
            {
                index2 = i + 1;
                break;
            }
        }
        cout << index2 - index << endl;
    }
}