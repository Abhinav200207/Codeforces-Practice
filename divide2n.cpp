#include <bits/stdc++.h>
using namespace std;

int divide2(int n)
{
    int cnt = 0;
    while (n % 2 == 0)
    {
        cnt++;
        n = n / 2;
    }
    return cnt;
}

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
        int cnt = n;
        for (auto i : v)
        {
            cnt -= divide2(i);
        }

        if (cnt < 0)
        {
            cout << 0 << endl;
        }
        else
        {
            vector<int> arr;
            for (int i = 1; i <= n; i++)
            {
                arr.push_back(divide2(i));
            }
            sort(arr.begin(), arr.end(), greater<int>());
            int ans = 0;
            int idx = 0;
            while (cnt > 0 && idx < n)
            {
                ans++;
                cnt -= arr[idx++];
            }
            if (cnt <= 0)
            {
                cout << ans << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
}