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
        int A = a, B = b;
        int n = a + b;
        string s;
        cin >> s;

        int flag = 1;
        int i = 0, j = n - 1;
        while (i <= j)
        {
            if (s[i] == '?' && s[j] == '?')
            {
                // pass
            }
            else if (s[i] != s[j])
            {
                if (s[i] == '?')
                {
                    if (s[j] == '0')
                    {
                        if (a > 0)
                        {
                            s[i] = '0';
                            a--;
                            a--;
                        }
                        else
                        {
                            flag = 0;
                            break;
                        }
                    }
                    else if (s[j] == '1')
                    {
                        if (b > 0)
                        {
                            s[i] = '1';
                            b--;
                            b--;
                        }
                        else
                        {
                            flag = 0;
                            break;
                        }
                    }
                }
                else if (s[j] == '?')
                {
                    if (s[i] == '0')
                    {
                        if (a > 0)
                        {
                            s[j] = '0';
                            a--;
                            a--;
                        }
                        else
                        {
                            flag = 0;
                            break;
                        }
                    }
                    else if (s[i] == '1')
                    {
                        if (b > 0)
                        {
                            s[j] = '1';
                            b--;
                            b--;
                        }
                        else
                        {
                            flag = 0;
                            break;
                        }
                    }
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
            else
            {
                if (i == j)
                {
                    if (s[i] == '0')
                    {
                        a--;
                    }
                    else
                    {
                        b--;
                    }
                }
                else
                {
                    if (s[i] == '0')
                    {
                        a--;
                        a--;
                    }
                    else
                    {
                        b--;
                        b--;
                    }
                }
            }
            i++;
            j--;
            if (flag == 0)
            {
                break;
            }
        }
        int mid = n / 2;
        if (s[mid] == '?' && n % 2 == 1)
        {
            if (a % 2 == 1)
            {
                s[mid] = '0';
                a--;
            }
            else if (b % 2 == 1)
            {
                s[mid] = '1';
                b--;
            }
            else
            {
                flag = 0;
            }
        }
        // cout << "s: " << s << " a: " << a << " b: " << b << endl;
        i = 0, j = n - 1;
        while (i < j)
        {
            if (s[i] == s[j] && s[i] == '?')
            {
                if (a > 1)
                {
                    s[i] = '0';
                    s[j] = '0';
                    a--;
                    a--;
                }
                else if (b > 1)
                {
                    s[i] = '1';
                    s[j] = '1';
                    b--;
                    b--;
                }
                else
                {
                    flag = 0;
                }
            }
            i++;
            j--;
        }
        for (auto abc : s)
        {
            if (abc == '0')
            {
                A--;
            }
            else
            {
                B--;
            }
        }
        if (A != 0)
        {
            flag = 0;
        }
        if (B != 0)
        {
            flag = 0;
        }
        if (flag == 0)
        {
            cout << -1;
        }
        else
        {
            cout << s;
        }
        cout << endl;
    }
}