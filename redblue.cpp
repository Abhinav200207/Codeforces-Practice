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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        string s;
        cin >> s;
        vector<int> b,r;
        for (int i = 0; i < n; i++){
            if (s[i] == 'B') b.push_back(v[i]);
            else r.push_back(v[i]);
        }
        sort(b.begin(), b.end());
        sort(r.begin(), r.end(),greater<int>());

        int flag = 1;
        for (int i = 0; i < b.size(); i++)
            if (b[i] < i + 1) flag = 0;
        for (int i = 0; i < r.size(); i++)
            if (r[i] > n - i) flag = 0;

        flag == 1 ? cout << "Yes" << endl : cout << "No" << endl;
    }
}