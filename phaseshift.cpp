#include <bits/stdc++.h>
using namespace std;

int cnt = 0;

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
        map<char, char> parent;
        unordered_set<char> st{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        vector<char> ans(n);
        for (int i = 0; i < n; i++)
        {
            for (char j = 'a'; j <= 'z'; j++)
            {
                if (parent.find(j) != parent.end())
                {
                    if (parent[j] == s[i])
                    {
                        ans[i] = j;
                        break;
                    }
                    continue;
                }
                if (j == s[i])
                {
                    continue;
                }
                if (parent.find(s[i]) != parent.end())
                {
                    char x = s[i];
                    int flag = 0;
                    while (parent.find(x) != parent.end())
                    {
                        if (parent[x] == j)
                        {
                            flag = 1;
                            break;
                        }
                        x = parent[x];
                    }
                    if (flag == 1 && st.size() > 1)
                        continue;
                }
                ans[i] = j;
                parent[j] = s[i];
                st.erase(st.find(j));
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i];
        }
        cout << endl;
    }
}
