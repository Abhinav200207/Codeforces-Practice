#include <bits/stdc++.h>
#define sz(x) ((int)x.size())
using namespace std;
string s;
int n;

void Solve()
{
    cin >> s;
    n = sz(s);

    if (s[0] == s[1])
    {
        cout << s[0] << " " << s[1] << " " << s.substr(2) << '\n';
        return;
    }
    if (s[n - 2] == s[n - 1])
    {
        cout << s.substr(0, n - 2) << " " << s[n - 2] << " " << s[n - 1] << '\n';
        return;
    }

    if (s[0] < s[1])
    {
        for (int i = 1; i < n - 1; i++)
        {
            if (s[i] > s[i + 1])
            {
                cout << s.substr(0, i) << " " << s[i] << " " << s.substr(i + 1) << '\n';
                return;
            }
        }
    }
    else
    {
        for (int i = 1; i < n - 1; i++)
        {
            if (s[i] <= s[i + 1])
            {
                cout << s.substr(0, i) << " " << s[i] << " " << s.substr(i + 1) << '\n';
                return;
            }
        }
    }

    cout << ":(\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        Solve();
    }

    return 0;
}