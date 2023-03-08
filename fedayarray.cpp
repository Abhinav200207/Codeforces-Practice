#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;

        cout << 2 * (a - b) << endl;
        for (int i = a; i >= b; i--)
        {
            cout << i << " ";
        }
        for (int i = b + 1; i < a; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}