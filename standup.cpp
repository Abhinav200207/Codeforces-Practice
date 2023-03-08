#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a == 0)
        {
            if (b || c || d)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
            continue;
        }
        if (b < c)
            swap(c, b);
        b = b - c;
        cout << a + 2 * c + min(a + 1, b + d) << endl;
    }
}