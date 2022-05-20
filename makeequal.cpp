#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        char a;
        cin >> n >> a;
        cin >> s;
        s = "0" + s;
        int index = -1;
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            if (s[i] == a)
            {
                cnt++;
            }
        }
        if (cnt == s.length() - 1){
            cout << 0 << endl;
            continue;
        }
        for (int i = n / 2 + 1; i <= n; i++)
        {
            if (s[i] == a)
            {
                index = i;
                break;
            }
        }
        if (index == -1)
        {
            cout << 2 << endl;
            cout << n - 1 << " " << n << endl;
        }
        if (index != -1)
        {
            cout << 1 << endl;
            cout << index << endl;
        }
    }
}