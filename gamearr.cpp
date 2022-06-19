#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s;
    cin >> n >> s;
    if (s - n < n)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        int sumnum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            cout << 1 << " ";
            sumnum++;
        }
        cout << s - sumnum << endl;
        cout << s/2 << endl;
    }
}