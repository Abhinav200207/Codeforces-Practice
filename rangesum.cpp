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
        if (n % 2 == 0)
        {
            int x = n / 2;
            while (x <= (3 * n) / 2)
            {
                if (x == n)
                {
                    x++;
                    continue;
                }
                cout << x++ << " ";
            }
            cout << endl;
        }
        else
        {
            vector<int> ans;
            int x = n / 2 + 1;
            while (x <= (3 * n) / 2)
            {
                ans.push_back(x++ + 2);
            }
            ans[0]--;
            ans[n - 1]++;
            ans[n - 2]++;
            for (auto i : ans)
                cout << i << " ";
            cout << endl;
        }
    }
}