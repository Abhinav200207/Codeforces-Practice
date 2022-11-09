#include <bits/stdc++.h>
using namespace std;

int findGCD(vector<int> arr)
{
    int result = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        result = __gcd(arr[i], result);

        if (result == 1)
        {
            return 1;
        }
    }
    return result;
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
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
        int gd = findGCD(v);
        if (gd == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            int ans = 3;
            for (int i = n; i >= 1; i--)
            {
                int temp = v[i];
                v[i] = __gcd(v[i], i);
                if (findGCD(v) == 1)
                {
                    ans = min(ans, n - i + 1);
                }
                v[i] = temp;
            }
            cout << ans << endl;
        }
    }
}