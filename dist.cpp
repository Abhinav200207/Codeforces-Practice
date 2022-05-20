#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int x, y;
        cin >> x >> y;
        if (x == 0 && y == 0)
        {
            cout << "0" << endl;
            continue;
        }
        if (floor(sqrt((x * x) + (y * y))) == sqrt(x * x + y * y))
        {
            cout << "1" << endl;
            continue;
        }
        else
        {
            cout << "2" << endl;
        }
    }
}