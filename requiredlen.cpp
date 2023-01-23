#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, x;
    cin >> n >> x;
    map<long long int, long long int> vis;
    map<long long int, long long int> dist;
    queue<long long int> q;
    q.push(x);
    dist[x] = 0;
    vis[x] = 1;

    while (q.size())
    {
        long long int a = q.front();
        q.pop();

        string s = to_string(a);

        if (s.length() == n)
        {
            cout << dist[a] << endl;
            return 0;
        }

        for (auto i : s)
        {
            if (i == '0')
                continue;
            long long int num = a * int(i - '0');
            if (!vis.count(num))
            {
                vis[num] = 1;
                dist[num] = dist[a] + 1;
                q.push(num);
            }
        }
    }
    cout << -1;
    return 0;
}
