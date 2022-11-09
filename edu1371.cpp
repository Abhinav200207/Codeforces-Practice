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
        vector<int> v(n);
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                if (i > 0 && v[i - 1] > v[i])
                {
                    int j = i - 1;
                    while (j > 0 && s[j] == '1' && v[j] > v[i])
                    {
                        j--;
                    }
                    if (s[j] == '0') ans += v[j];
                    else ans += v[i];
                    // cout << i << " " << ans << endl;
                    s[j] = '1';
                    s[i] = '0';
                }
                else
                {
                    ans += v[i];
                }
            }
        }
        cout << ans << endl;
    }
}