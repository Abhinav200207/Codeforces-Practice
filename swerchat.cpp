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
        vector<int> v1(n);
        vector<int> v2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v2[i];
        }
        int i = n - 1;
        int j = n - 1;
        while (i >= 0)
        {
            // cout << i << " " << j << endl;
            if (v2[j] == v1[i])
            {
                i--;
                j--;
            }
            else
            {
                i--;
            }
        }
        cout << j + 1 << endl;
    }
}