#include <bits/stdc++.h>
using namespace std;

void dfs(int i, pair<int, int> prev, string &s, vector<int> &v, vector<pair<int, int>> &freq, unordered_set<int> &vis)
{
    if (vis.find(i) != vis.end())
    {
        freq[i].first += prev.first;
        freq[i].second += prev.second;
        if (i == 1)
            return;
        dfs(v[i], prev, s, v, freq, vis);
        return;
    }
    else
    {
        if (s[i] == 'W')
        {
            freq[i].first = prev.first + 1;
            freq[i].second = prev.second;
        }
        else
        {
            freq[i].first = prev.first;
            freq[i].second = prev.second + 1;
        }
        vis.insert(i);
    }
    if (i == 1)
        return;
    dfs(v[i], freq[i], s, v, freq, vis);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n;
        vector<int> v(n + 1);
        v[1] = 1;
        for (int i = 2; i <= n; i++)
        {
            cin >> v[i];
        }
        cin >> s;
        s = 'a' + s;
        unordered_set<int> st(v.begin() + 1, v.end());
        queue<int> q;
        unordered_set<int> vis;
        for (int i = 1; i <= n; i++)
        {
            if (st.find(i) == st.end())
            {
                q.push(i);
            }
        }

        vector<pair<int, int>> freq(n + 1, {0, 0}); // {W,B}
        while (q.size())
        {
            int temp = q.front();
            q.pop();
            pair<int, int> prev{0, 0};
            dfs(temp, prev, s, v, freq, vis);
            // cout << "After " << temp << endl;
            // for (int i = 1; i <= n; i++)
            // {
            //     cout << i << "-> (" << freq[i].first << "," << freq[i].second << ") " << endl;
            // }
            // cout << endl;
        }
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            if (freq[i].first == freq[i].second)
                ans++;
        }
        cout << ans << endl;
    }
}

//   (2,3)
// + (2,2)