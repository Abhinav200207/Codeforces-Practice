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
        int k;
        cin >> k;
        vector<pair<char, int>> v(s.length());
        int ans = 0;
        for (int i = 0; i < s.length(); i++)
        {
            v[i] = make_pair(s[i], i);
            ans += (s[i] - 'a' + 1);
        }
        sort(v.begin(), v.end());
        while (ans > k)
        {
            int x = (v.back().first - 'a' + 1);
            v.pop_back();
            ans = ans - x;
        }
        unordered_set<int> st;
        for (int i = 0; i < v.size(); i++)
        {
            st.insert(v[i].second);
        }
        string res = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (st.find(i) != st.end())
            {
                res += s[i];
                st.erase(i);
            }
        }
        cout << res << endl;
    }
}