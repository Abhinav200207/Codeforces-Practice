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
        vector<int> v1(n);
        vector<int> v2(m + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        for (int i = 1; i <= m; i++)
        {
            cin >> v2[i];
        }
        sort(v1.begin(), v1.end(), greater<>());
        // for (auto i : v1)
        //     cout << i << " ";
        // cout << endl;

        priority_queue<int, vector<int>, greater<int>> pq;

        for (int i = 1; i <= m; i++){
            pq.push(v2[i]);
        }

        long long int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int x = pq.top();
            int y = v2[v1[i]];
            // cout << x << " " << y << "\n";
            int mini = min(x, y);
            ans += mini;
            if (x == mini && x != y)
            {
                pq.pop();
            }
        }
        cout << ans << "\n";
    }
}

// 4 3 3 2 2
// 3 5 12 20

// ans = 3 + 5 + 12 + 5 + 5