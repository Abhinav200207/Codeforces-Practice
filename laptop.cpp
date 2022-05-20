#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v[i] = make_pair(a, b);
        // cout << v[i].first << v[i].second << endl;
    }
    sort(v.begin(), v.end());
    // cout << "\n";
    for (int i = 0; i < n - 1; i++)
    {
        // cout << v[i].first << " " << v[i].second << endl;
        if (v[i].second > v[i+1].second)
        {
            cout << "Happy Alex" << endl;
            return 0;
        }
    }
    cout << "Poor Alex" << endl;
    v.erase(v.begin(), v.end());
    return 0;
}
