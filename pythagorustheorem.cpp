#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            int x = i * i + j * j;
            int sq = sqrt(x);
            if (sq * sq == x)
            {
                if (sq <= n)
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
}