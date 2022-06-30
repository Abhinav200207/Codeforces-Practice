#include <bits/stdc++.h>
using namespace std;

int isPresent(vector<char> v, char c)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == c)
            return true;
    }
    return false;
}

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
        int k;
        cin >> k;
        vector<char> v(k);
        for (int i = 0; i < k; i++)
        {
            cin >> v[i];
        }
        string temp = "";
        int flag = 0;
        vector<string> ans;
        for (int i = 0; i < n; i++)
        {
            if (isPresent(v, v[i]))
            {
                if (flag == 1)
                {
                    temp += "0";
                }
                else
                {
                    flag = 1;
                }
                temp += "1";
                ans.push_back(temp);
            }
            else
            {
                temp += "0";
            }
        }
        int res = 1;
        for (int i = 0; i < ans.size(); i++)
        {
            if (ans[i].length() > res)
            {
                res = ans[i].length();
            }
        }
        cout << res - 1 << endl;
    }
}