#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        // s = "0" + s;
        map<char, int> mp;
        for (int i = 0; i < s.length(); i++)
        {
            mp[s[i]]++;
        }
        int count = 0;
        // for (auto i : mp)
        // {
        //     cout << i.first << ": " << i.second << endl;
        // }
        for (int i = 0; i < s.length(); i++)
        {
            if (mp[s[i]] % 2 == 1)
            {
                mp[s[i]]--;
                count++;
            }
        }
        
        string str = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (mp.find(s[i]) != mp.end() && mp[s[i]] != 0)
            {
                str = str + s[i];
                mp[s[i]]--;
            }
        }
        // cout << str << endl;
        for (int i = 0; i < str.length(); i += 2)
        {
            if (str[i] != str[i + 1])
            {
                count++;
            }
        }
        cout << count << endl;
    }
}