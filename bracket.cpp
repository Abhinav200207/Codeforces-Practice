#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a = 0,b = 0;
    string temp = "";
    for (int i = 0; i < n; i++)
    {
        temp += s[i];
        if (temp == "((" || temp == "))" || temp == "()")
        {
            b += 2;
            a++;
            temp = "";
        }
        else if (temp.length() > 1)
        {
            if (s[i] == ')'){
                b += temp.length();
                a++;
                temp = "";
            }
        }
    }
    cout << a << " " << (n - b) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}

// 
// 
// )((((()