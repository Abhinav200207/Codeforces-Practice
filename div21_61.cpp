#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char s[n];
        for (int i = 0; i < n; i++)
            cin >> s[i];

        char b[n];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        int dp[n];
        for (int i = 0; i < n; i++)
            dp[i] = 0;
        vector<vector<int>> op;
        op.push_back({});
        op.push_back({});
        for (int i = 0; i < n; i++)
        {
            int st = i;
            while (i < n && s[i] == '1')
                i++;
            if (st != i)
            {
                op[0].push_back(st + 1);
                op[1].push_back(i);
                dp[0]++;
                dp[st]--;
                dp[i]++;
            }
        }

        int point = 0;
        int xs = 0;
        char ans[n];
        for (int i = 0; i < n; i++)
        {
            xs += dp[i];
            if ((b[i] == '0' && xs % 2 == 1) || (b[i] == '1' && xs % 2 == 0))
            {
                ans[i] = '1';
            }
            else
                ans[i] = '0';
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (ans[i] != ans[i + 1])
                point = 1;
        }
        if (point == 0)
        {
            cout << "YES" << endl;
            if (ans[0] == '1')
            {
                op[0].push_back(1);
                op[1].push_back(n);
                op[0].push_back(1);
                op[1].push_back(1);
                op[0].push_back(2);
                op[1].push_back(n);
            }
            cout << op[0].size() << endl;
            for (int i = 0; i < op[0].size(); i++)
                cout << op[0][i] << " " << op[1][i] << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}