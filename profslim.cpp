#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<long long int> v(n);
        vector<long long int> temp(n);
        long long int cnt = 0;
        for (long long int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] < 0)
            {
                cnt++;
            }
            temp[i] = abs(v[i]);
        }
        // -45 9 -48 -67 -55 7
        // 71 -35 7 -4 -11 -25
        long long int flag = 0;
        long long int diff = 0;
        long long int prev = 0;
        long long int k = 0;
        for (long long int i = 1; i < n; i++)
        {
            prev = diff;
            diff = temp[i] - temp[i - 1];
            if (diff * prev < 0)
            {
                k = i;
                flag++;
            }
        }
        // cout << flag << endl;
        if (flag > 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (cnt == 0 && is_sorted(v.begin(), v.end()))
            {
                cout << "YES" << endl;
            }
            else if (cnt == 0 && !is_sorted(v.begin(), v.end()))
            {
                cout << "NO" << endl;
            }
            else if (cnt == k)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}

// 4
// 7
// 7 3 2 -11 -13 -17 -23
// 6
// 4 10 25 47 71 96
// 6
// 6
