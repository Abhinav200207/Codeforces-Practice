#include <bits/stdc++.h>

using namespace std;

int main()
{
    int f[10];
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 1; i <= 9; i++)
        cin >> f[i];
    for (int i = 0; i < n; i++)
        if (f[s[i] - '0'] > (s[i] - '0'))
        {
            while (i < n && f[s[i] - '0'] >= (s[i] - '0'))
            {
                s[i] = char(f[s[i] - '0'] + '0');
                i++;
            }
            break;
        }
    cout << s << endl;
}