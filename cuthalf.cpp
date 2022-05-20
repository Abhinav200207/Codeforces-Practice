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
        map<char, int> mp;
        for (int j = 0; j < s.length(); j++)
        {
            mp[s[j]]++;
        }
        int i = 0;
        for (i = 0; i < s.length(); i++)
        {
            if (mp[s[i]] == 1)
            {
                break;
            }
            if (mp[s[i]] > 1)
            {
                mp[s[i]]--;
            }
        }
        cout << s.substr(i,s.length()) << endl;
    }
}
