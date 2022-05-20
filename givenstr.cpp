#include <bits/stdc++.h>
using namespace std;

vector<string> printSubstrings(string str)
{
    vector<string> v;
    for (int i = 0; i < str.length(); i++)
    {
        string subStr;
        for (int j = i; j < str.length(); j++)
        {
            subStr += str[j];
            v.push_back(subStr);
        }
    }
    return v;
}

void solve(string s, int n)
{
    vector<string> v;
    v = printSubstrings(s);
    map<string, int> m;
    for (int i = 0; i < v.size(); i++)
    {
        if (m.find(v[i]) != m.end())
        {
            m[v[i]]++;
        }
        else
        {
            m[v[i]] = 1;
        }
    }
    int maxlen = 0;
    string maxstr = "";
    for (auto it = m.begin(); it != m.end(); it++)
    {
        if (it->second >= 2)
        {
            maxlen = max(maxlen, (int)(it->first).length());
            // maxstr = it->first;
        }
    }
    cout << maxlen;
}

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    solve(s, n);
}
//    if (it->second >= 2)
// ans = max(ans, (int)(it->first).length());
