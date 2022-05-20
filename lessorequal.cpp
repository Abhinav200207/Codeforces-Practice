#include <bits/stdc++.h>

using namespace std;

int main()
{
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif

    int n, k;
    scanf("%d %d", &n, &k);

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }

    sort(a.begin(), a.end());

    int ans;

    if (k == 0)
    {
        ans = a[0] - 1;
    }
    else
    {
        ans = a[k - 1];
    }

    int cnt = 0;

    for (int i = 0; i < n; ++i)
    {
        if (a[i] <= ans)
        {
            ++cnt;
        }
    }

    if (cnt != k || !(1 <= ans && ans <= 1000 * 1000 * 1000))
    {
        puts("-1");
        return 0;
    }

    printf("%d\n", ans);

    return 0;
}