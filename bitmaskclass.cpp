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
        if (n % 2)
        {
            if (n > 1)
                cout << 1 << endl;
            else
                cout << 3 << endl;
        }
        else
        {
            if (!(n & (n - 1)))
                cout << n + 1 << endl;
            else
                cout << (n & ~(n - 1)) << endl;
        }
    }
}