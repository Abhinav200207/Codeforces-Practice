#include <bits/stdc++.h>
using namespace std;

// 3
// 2
// 3 1
// 3
// 6 1 5
// 5
// 3 1 5 9 2

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int a[n + 1];

        for (long long int i = 1; i < n + 1; i++)
        {
            cin >> a[i];
        }

        long long int count = 0;
        for (long long int i = 1; i <= n; i++)
        {
            for (long long int j = a[i] - i; j <= n; j += a[i])
            {
                if (j >= 0)
                {
                    if (a[i] * a[j] == i + j && i < j)
                    {
                        count++;
                    }
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}