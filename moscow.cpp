#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);
    vector<int> b(n + 1);
    vector<int> pos_a(n + 1);
    vector<int> pos_b(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pos_a[a[i]] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
        pos_b[b[i]] = i;
    }

    // MEX = 1
    int left_cnt = min(pos_a[1], pos_b[1]) - 1;
    int right_cnt = n - max(pos_a[1], pos_b[1]);
    int mid_cnt = abs(pos_a[1] - pos_b[1]) + 1;

    // MEX = 2 - n
    int l = n, r = -1;
    for (int MEX = 2; MEX <= n; MEX++)
    {
        l = min({l, pos_a[MEX - 1], pos_b[MEX - 1]});
        r = max({r, pos_a[MEX - 1], pos_b[MEX - 1]});
        if ((l <= pos_a[MEX] && pos_a[MEX] <= r) || (l <= pos_b[MEX] && pos_b[MEX] <= r))
            continue;

        int start = 0, end = n - 1;
        if (pos_a[MEX] < l)
            start = max(start, pos_a[MEX] + 1);
        if (pos_b[MEX] < l)
            start = max(start, pos_b[MEX] + 1);
        if (pos_a[MEX] > r)
            end = min(end, pos_a[MEX] - 1);
        if (pos_b[MEX] > r)
            end = min(end, pos_b[MEX] - 1);

        // lCnt = l - start + 1, rCnt = end - r + 1;
        // res += lCnt * rCnt;
    }
}
