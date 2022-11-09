#include <bits/stdc++.h>
using namespace std;

int totalBhai(string s, int n)
{
    int tot = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'L')
        {
            tot += i;
        }
        else
        {
            tot += (n - i - 1);
        }
    }
    return tot;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        long long tot = 0;
        vector<long long> v;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                v.push_back((n - 1 - i) - i);
                tot += i;
            }
            else
            {
                v.push_back(i - (n - 1 - i));
                tot += n - 1 - i;
            }
        }
        sort(v.begin(), v.end(), greater<int>());
        for (int i = 0; i < n; i++)
        {
            if (v[i] > 0)
            {
                tot += v[i];
            }
            cout << tot << ' ';
        }
        cout << '\n';
    }
}

// 86 96 103 110 116 102 102 102 102 102 102 102 - incorrect
// 86 95 98 101 102 102 102 102 102 102 102 102 - correct