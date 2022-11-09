#include <bits/stdc++.h>
using namespace std;

class Solution
{
    vector<string> fun(string s)
    {
        vector<string> res;
        for (int i = 0; i < 4; i++)
        {
            string temp = s;
            temp[i] = (s[i] - '0' + 1) % 10 + '0';
            res.push_back(temp);
            temp[i] = (s[i] - '0' - 1 + 10) % 10 + '0';
            res.push_back(temp);
        }
        return res;
    }

public:
    int openLock(vector<string> &deadends, string target)
    {
        unordered_set<string> st(deadends.begin(), deadends.end());
        unordered_set<string> vis;
        if (st.find(target) != st.end())
            return -1;
        if (st.find("0000") != st.end())
            return -1;
        queue<string> q;
        q.push("0000");
        vis.insert("0000");
        int res = 0;

        while (q.size())
        {
            int sz = q.size();
            for (int i = 0; i < sz; i++)
            {
                string s = q.front();
                q.pop();
                vector<string> temp = fun(s);
                for (auto j : temp)
                {
                    if (j == target)
                        return res;
                    if (vis.find(j) != vis.end())
                        continue;
                    if (st.find(j) == st.end())
                    {
                        vis.insert(j);
                        q.push(j);
                    }
                }
            }
            res++;
        }
        return -1;
    }
};