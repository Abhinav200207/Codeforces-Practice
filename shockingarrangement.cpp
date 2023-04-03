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
        vector<int> pos, neg;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] >= 0)
                pos.push_back(v[i]);
            else
                neg.push_back(v[i]);
        }
        if (0 == *max_element(v.begin(), v.end()))
        {
            cout << "No\n";
            continue;
        }
        cout << "Yes\n";
        vector<int> ans;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (sum > 0)
            {
                ans.push_back(neg.back());
                neg.pop_back();
                sum += ans.back();
            }
            else
            {
                ans.push_back(pos.back());
                sum += ans.back();
                pos.pop_back();
            }
        }
        for (auto i : ans) cout << i << " ";
        cout << endl;
    }
}