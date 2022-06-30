#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int flag = s.back() == 'B';
        int sum = 0;
        for (auto i : s)
        {
            if (i == 'A')
                sum++;
            else
                sum--;
            if (sum < 0)
                flag = 0;
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
}
