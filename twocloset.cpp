#include <cstdio>
#include <vector>
#include <utility>
#include <queue>
using namespace std;

const int MAXN = 100100;

int ans, n, m, k, i, x, y, z, v, to, cs;
bool a[MAXN];
vector<pair<int, int>> g[MAXN];
int d[MAXN], vis[MAXN];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> s;

int main()
{
    scanf("%d%d%d", &n, &m, &k);
    for (int i = 1; i <= k; i++)
    {
        scanf("%d", &x);
        a[x] = 1;
    }
    for (int i = 1; i <= m; i++)
    {
        scanf("%d%d%d", &x, &y, &z);
        g[x].push_back(make_pair(y, z));
        g[y].push_back(make_pair(x, z));
    }

    ans = 1e9 + 111;
    for (int i = 1; i <= n; i++)
    {
        if (!a[i])
            continue;

        for (int j = 1; j <= n; j++)
            d[j] = 1e9, vis[j] = 0;
        d[i] = 0;
        int cnt_special = 0;

        while (s.empty() == false)
            s.pop();
        s.push(make_pair(0, i));

        while (!s.empty())
        {
            v = s.top().second;
            s.pop();

            if (vis[v] == 1)
                continue;
            vis[v] = 1;
            cnt_special += a[v];

            if (d[v] > ans)
                break;

            if (a[v] and cnt_special == 2)
            {
                ans = min(ans, d[v]);
                break;
            }

            for (int i = 0; i < g[v].size(); i++)
            {
                to = g[v][i].first;
                cs = g[v][i].second;
                if (d[v] + cs < d[to])
                {
                    d[to] = d[v] + cs;
                    s.push(make_pair(d[to], to));
                }
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}