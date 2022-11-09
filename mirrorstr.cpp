#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string s2 = "";
        s2 += s[0];
        bool flag = false;
        for (int i = 1; i < n; i++)
        {
            if (s[i] < s[i - 1])
            {
                s2 += s[i];
                flag = true;
            }
            else if (s[i] == s[i - 1])
            {
                if (flag)
                    s2 += s[i];
                else
                    break;
            }
            else
                break;
        }
        cout << s2;
        reverse(s2.begin(), s2.end());
        cout << s2 << endl;
    }
}