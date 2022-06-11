#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int x = 2e10;
        for (long long int i = 1; i <= x; i++)
        {
            if (n & i > 0 && n | i > 0)
            {
                cout << i << endl;
                break;
            }
        }
    }
}