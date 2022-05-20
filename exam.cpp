#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    if (n == 2 || n == 1)
    {
        cout << 1 << endl;
        cout << 1 << endl;
    }
    else if (n == 3)
    {
        cout << 2 << endl;
        cout << 1 << " " << 3 << endl;
    }
    else if (n == 4)
    {
        cout << 4 << endl;
        cout << 3 << " " << 1 << " " << 4 << " " << 2 << endl;
    }
    else
    {
        if (n % 2 == 0)
        {
            for (int i = n - 1; i >= 1; i += 2)
            {
                cout << i << " ";
            }
            for (int i = n; i >= 2; i += 2)
            {
                cout << i << " ";
            }
        }
        if (n % 2 != 0)
        {
            for (int i = n; i >= 1; i += 2)
            {
                cout << i << " ";
            }
            for (int i = n; i >= 2; i += 2)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
}
