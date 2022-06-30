#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        vector<long long int> v(n + 1);
        for (long long int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        if (n % 2 == 0)
        {
            if (k == 1)
            {
                cout << floor(n / 2) - 1 << endl;
            }
            else
            {
                long long int cnt1 = 0;
                for (long long int i = 2; i <= n - 1; i++)
                {
                    if (i % 2 == 0 && v[i] > v[i - 1] + v[i + 1])
                    {
                        cnt1++;
                    }
                    if (i % 2 == 1 && v[i] > v[i - 1] + v[i + 1])
                    {
                        cnt1++;
                    }
                }
                cout << cnt1 << endl;
            }
        }
        else
        {
            if (k == 1)
            {
                cout << floor(n / 2) << endl;
            }
            else
            {
                long long int cnt1 = 0;
                for (long long int i = 2; i <= n - 1; i++)
                {
                    if (i % 2 == 0 && v[i] > v[i - 1] + v[i + 1])
                    {
                        cnt1++;
                    }
                    if (i % 2 == 1 && v[i] > v[i - 1] + v[i + 1])
                    {
                        cnt1++;
                    }
                }
                cout << cnt1 << endl;
            }
        }
    }
}