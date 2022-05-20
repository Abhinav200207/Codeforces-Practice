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
        int max_num = INT_MIN;
        int min_num = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            max_num = max(max_num, v[i]);
            min_num = min(min_num, v[i]);
        }
        cout << max_num - min_num << endl;
    }
}
