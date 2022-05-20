#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> v(t);
    for (int i = 0; i < t; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < t; i++)
    {
        int cnt = 0;
        int ans = 20;
        int temp = v[i];
        int index = 0;
        for (int j = 0; j <= 15; j++)
        {
            temp = v[i];
            cnt = index;
            temp = temp + cnt;
            for (int k = 0; k <= 15; k++)
            {
                if (temp % 32768 == 0)
                {
                    break;
                }
                cnt++;
                temp = temp * 2;
            }
            ans = min(cnt, ans);
            index++;
        }
        cout << ans << " ";
    }
}
