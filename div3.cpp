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
        vector<vector<int>> v(26,vector<int> (0,0));
        vector<int> cntV(26,0);
        for (int i = 0; i < s.length(); i++)
        {
            v[s[i] - 'a'].push_back(i + 1);
            cntV[s[i] - 'a']++;
        }
        int jmp = 1;
        int cost = 0;
        int cnt = s.length() - 2;
        vector<int> ans;
        int index = s[0] - 'a';
        ans.push_back(1);
        v[s[0] - 'a'].pop_back();
        while (cnt)
        {
            int x = index;
            for (int j = index; j < 26; j++)
            {
                if (cntV[j] > 0)
                {
                    x = index;
                    break;
                }
            }
            int y = index;
            for (int j = index; j >= 0; j--)
            {
                if (cntV[j] > 0)
                {
                    y = index;
                    break;
                }
            }
            if (abs(x - index) <= abs(y - index)){
                x = x;
            }
            else{
                x = y;
            }
            cout << "Test:" << x << endl;
            ans.push_back(v[x][v[x].size() - 1]);
            v[x].pop_back();
            jmp++;
            cnt--;
            cntV[x]--;
            cost += abs(index - x);
        }
        v[s[s.length() - 1] - 'a'].pop_back();
        ans.push_back(s.length());
        cout << cost << " " << jmp << endl;
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}