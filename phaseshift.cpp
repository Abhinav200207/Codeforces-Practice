#include <bits/stdc++.h>
using namespace std;

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
                if (parent.find(s[i]) != parent.end() && parent[s[i]] == j)
                {
                    continue;
                }
                else
                {
                    ans[i] = j;
                    parent[j] = s[i];
                    break;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i];
        }
        cout << endl;
        cout << endl;
        cout << endl;
    }
}
