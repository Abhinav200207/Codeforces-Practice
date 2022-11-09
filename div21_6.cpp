#include <bits/stdc++.h>
using namespace std;
#define ll long long int

string recp(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
            s[i] = '1';
        else if (s[i] == '1')
            s[i] = '0';
    }
    return s;
}

bool fun(string s1, string s2)
{
    if (s1 == s2)
    {
        return true;
    }
    if (s1 == recp(s2))
    {
        return true;
    }
    return false;
}

pair<string, string> generate(int n)
{
    string s1 = "", s2 = "";
    for (int i = 0; i < n; i++)
    {
        s1 += '0';
        s2 += '1';
    }
    return {s1, s2};
}

bool flagBhai(string s1, string s2)
{
    if (s1 == s2)
    {
        int one = 0;
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i] == '1')
                one++;
        }
        if (one % 2 == 0)
        {
            return true;
        }
        else
        {
            vector<pair<int, int>> ans;
            for (int i = 0; i < s1.length(); i++)
            {
                if (s1[i] == '1')
                    ans.push_back({i + 1, i + 1});
            }
            ans.push_back({1, s1.length()});
            ans.push_back({1, 1});
            ans.push_back({2, s1.length()});
            cout << "Yes" << endl;
            cout << ans.size() << endl;
            for (int i = 0; i < ans.size(); i++)
            {
                cout << ans[i].first << " " << ans[i].second << endl;
            }
            return false;
        }
    }
    return true;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s1, s2;
        cin >> s1;
        cin >> s2;
        auto temp = generate(n);
        if (s1 == temp.first && s2 == temp.first)
        {
            cout << "Yes" << endl;
            cout << "0" << endl;
            continue;
        }
        if (s1 == temp.second && s2 == temp.first)
        {
            cout << "Yes" << endl;
            cout << 1 << endl;
            cout << 1 << " " << n << endl;
            continue;
        }
        if (s1 == temp.second && s2 == temp.second)
        {
            vector<pair<int, int>> ans;
            ans.push_back({1, 1});
            ans.push_back({2, n});
            cout << "Yes" << endl;
            cout << ans.size() << endl;
            for (int i = 0; i < ans.size(); i++)
            {
                cout << ans[i].first << " " << ans[i].second << endl;
            }
            continue;
        }
        if (s1 == temp.first && s2 == temp.second)
        {
            vector<pair<int, int>> ans;
            ans.push_back({1, n});
            ans.push_back({1, 1});
            ans.push_back({2, n});
            cout << "Yes" << endl;
            cout << ans.size() << endl;
            for (int i = 0; i < ans.size(); i++)
            {
                cout << ans[i].first << " " << ans[i].second << endl;
            }
            continue;
        }
        if (fun(s1, s2) == false)
        {
            cout << "No" << endl;
            continue;
        }
        else
        {
            bool flag = flagBhai(s1, s2);
            if (flag)
            {
                vector<pair<int, int>> ans;
                for (int i = 0; i < n; i++)
                {
                    if (s1[i] == '1')
                        ans.push_back({i + 1, i + 1});
                }
                cout << "Yes" << endl;
                cout << ans.size() << endl;
                for (int i = 0; i < ans.size(); i++)
                {
                    cout << ans[i].first << " " << ans[i].second << endl;
                }
            }
        }
    }
}