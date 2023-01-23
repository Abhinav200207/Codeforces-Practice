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
        vector<int> v(n);
        vector<int> v1(m);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> v1[i];
        }
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < n; i++)
        {
            pq.push(v[i]);
        }
        for (int i = 0; i < m; i++)
        {
            int x = pq.top();
            pq.pop();
            pq.push(v1[i]);
        }
        long long int ans = 0;
        while (pq.size())
        {
            ans += pq.top();
            pq.pop();
        }
        cout << ans << endl;
    }
}