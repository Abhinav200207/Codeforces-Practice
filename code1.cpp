#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        if (n >= 10)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (long long int i = 0; i < n; i++)
            {
                cout << pow(10, i) << " ";
            }
            cout << endl;
        }
    }
}