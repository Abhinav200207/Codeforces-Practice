#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c, ans = 1;
    cin >> n >> a >> b >> c;
    for (int i = 0; i <= 4000; i++)
    {
        for (int j = 0; j <= 4000; j++)
        {
            int temp = n - a * i - b * j;
            if (temp >= 0 && temp % c == 0)
                ans = max(ans, i + j + temp / c);
        }
    }
    cout << ans;
}