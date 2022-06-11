#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        set<char> st;
        for (int i = 0; i < s.length(); i++)
        {
            st.insert(s[i]);
        }
        vector<char> v;
        for (int i = 0; i < st.size(); i++)
        {
            v.push_back(s[i]);
        }
        int index = 0;
        string ans = "YES";
        for (int i = 0; i < s.length(); i++)
        {
            if (v[index] != s[i])
            {
                ans = "NO";
                break;
            }
            index = (index + 1) % v.size();
        }
        cout << ans << endl;
    }
}