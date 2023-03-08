#include <bits/stdc++.h>
using namespace std;

struct Compare
{
    bool operator()(const std::pair<int, int> &lhs, const std::pair<int, int> &rhs) const
    {
        return lhs.first * lhs.second < rhs.first * rhs.second;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, Compare> pq;

        for (auto i : mp)
        {
            pq.push({i.second, i.first});
        }

        if (pq.size() == 1)
        {
            cout << "HELLO" << endl;
            long long int ans = 0;
            auto x = pq.top();
            pq.pop();
            x.first -= k * 2;
            ans += k;
            ans += x.first * x.second;
            cout << ans << endl;
            continue;
        }

        while (pq.size() >= 2 && k--)
        {
            auto x = pq.top();
            pq.pop();
            auto y = pq.top();
            pq.pop();

            cout << "x: " << x.second << ":" << x.first << "\n";
            cout << "y: " << y.second << ":" << y.first << "\n";

            x.first--;
            y.first--;

            if (x.first)
            {
                pq.push({x.first, x.second});
            }
            if (y.first)
            {
                pq.push({y.first, y.second});
            }
        }

        if (pq.size() == 1 && k)
        {
            cout << "HELLO" << endl;
            long long int ans = 0;
            auto x = pq.top();
            pq.pop();
            x.first -= k * 2;
            ans += k;
            ans += x.first * x.second;
            cout << ans << endl;
            continue;
        }
        long long int ans = 0;
        while (pq.size())
        {
            auto x = pq.top();
            pq.pop();
            ans += x.first * x.second;
        }
        cout << ans << endl;
    }
}