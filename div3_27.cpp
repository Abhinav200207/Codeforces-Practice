#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (((a + b) % 2 == 0 && (a + b) > 0) || ((a + c) % 2 == 0 && (a + c) > 0) || ((c + b) % 2 == 0 && (c + b) > 0))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}