#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            mp[a]++;
        }
        priority_queue<int> pq;
        for (auto i : mp)
        {
            pq.push(i.second);
        }
        set<int> st;
        for (int i = 0; i < m; i++)
        {
            int a;
            cin >> a;
            st.insert(a);
        }

        int ans = 0;
        while (pq.size() && st.size())
        {
            int t = pq.top();
            pq.pop();

            auto it = lower_bound(st.begin(), st.end(), t);
            if (it == st.end())
            {
            }
            else
            {
                ans += t;
                st.erase(it);
            }
        }
    }
}