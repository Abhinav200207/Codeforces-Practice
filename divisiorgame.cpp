#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v(a * b * c + 1);
    for (int i = 1; i <= a * b * c; i++)
    {
        for (int j = i; j <= a * b * c; j += i)
        {
            v[j]++;
        }
    }

    int ans = 0;
    int mod = 1073741824;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            for (int l = 1; l <= c; l++)
            {
                int num = (i * j * l);
                ans = (ans + v[num]) % mod;
            }
        }
    }
    cout << ans << endl;
}