#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

#define ll long long
int main()
{
    ll a, b, c, i, j, ans, d;
    while (cin >> a >> b >> c)
    {
        ans = 0;
        for (int i = 0; i < 1000; i++)
        {
            d = (c - (a * i));
            if (d < 0)
            {
                ans = 0;
                break;
            }
            if (d % b == 0)
            {
                ans = 1;
                break;
            }
        }

        if (ans)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}