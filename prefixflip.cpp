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
        string s1, s2;
        cin >> s1 >> s2;
        vector<vector<int>> ans;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s1[i] != s2[i])
            {
                ans.push_back({i + 1, 1, i + 1});
            }
        }
        cout << 3 * ans.size() << endl;
        for (auto i : ans)
        {
            cout << i[0] << " 1 " << i[2] << " ";
        }
        cout << endl;
    }
}