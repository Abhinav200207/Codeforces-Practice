#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str = "";
        string s;
        cin >> s;
        int n;
        cin >> n;
        vector<int> v(27, 0);
        for (int i = 0; i < s.length(); i++)
        {
            v[s[i] - 'a' + 1]++;
        }
        // cout << "a b c d e f g h i j k l m n o p q r s t u v w x y z" << endl;
        // for (int i = 1; i <= 26; i++)
        // {
        //     cout << v[i] << " ";
        // }
        int ans = 0;
        for (int i = 1; i <= 27; i++)
        {
            ans += v[i];
        }
        if (n >= ans)
        {
            cout << s << endl;
        }
        else
        {
            map<int, int> mp;
            for (int i = 26; i >= 1; i--)
            {
                while (v[i] > 0 && ans > n)
                {
                    ans -= i;
                    v[i]--;
                    mp[v[i]]++;
                }
            }
            for (int i = 0; i < s.length(); i++)
            {
                if (mp.find(s[i] - 'a' + 1) != mp.end())
                {
                    mp[s[i] - 'a' + 1]--;
                    if (mp[s[i] - 'a' + 1] == 0)
                    {
                        mp.erase(s[i] - 'a' + 1);
                    }
                    continue;
                }
                else
                {
                    str += s[i];
                }
            }
        }
        cout << str << endl;
    }
}