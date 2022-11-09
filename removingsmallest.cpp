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
        s = 'a' + s;
        vector<int> v(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            if (s[i] == '0')
            {
                for (int j = i; j <= n; j += i)
                {
                    if (s[j] == '1')
                        break;
                    if (v[j] == 0)
                        v[j] = i;
                }
            }
        }
        cout << accumulate(v.begin(), v.end(), 0LL) << endl;
    }
}