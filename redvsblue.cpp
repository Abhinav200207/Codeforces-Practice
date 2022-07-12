#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, r, b;
        cin >> n >> r >> b;
        string s = "X";
        for (int i = 1; i <= r + b; i++)
        {
            s += "R";
        }
        int x;
        if (r % b == 0)
        {
            x = ceil(r / (b + 1)) + 1;
        }
        else
        {
            x = ceil(r / b);
        }
        for (int i = x; i <= r + b; i += x)
        {
            s[i] = 'B';
        }
        cout << s.substr(1, r + b) << endl;
    }
}