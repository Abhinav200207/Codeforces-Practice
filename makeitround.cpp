#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, m, k = 1;
        cin >> n >> m;
        int ans = n;
        while (n % 10 == 0)
        {
            // cout << "ans" << endl;
            n = n / 10;
        }
        while (n % 5 == 0)
        {
            n = n / 5;
            if (k * 2 <= m)
                k *= 2;
            else
                break;
        }
        while (n % 2 == 0)
        {
            n = n / 2;
            if (k * 5 <= m)
                k *= 5;
            else
                break;
        }
        while ((k * 10) <= m)
        {
            k = k * 10;
        }
        k = (m / k) * k;
        cout << k * ans << endl;
    }
}