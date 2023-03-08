#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        string s;

        int flag = 1;
        int i = 0, j = a + b - 1;
        while (i < j)
        {
            if (s[i] != '?' && s[j] != '?' && s[i] != s[j])
            {
                if (s[i] == '?')
                {
                }
                if (s[j] == '?')
                {
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
        }
    }
}