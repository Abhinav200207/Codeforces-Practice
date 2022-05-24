#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &v1, vector<int> &v2)
{
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v1(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        vector<int> v2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v2[i];
        }
        vector<pair<int, int>> ans;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (v1[j] > v1[j + 1])
                {
                    ans.push_back(make_pair(j, j + 1));
                    swap(v1[j], v1[j + 1]);
                    swap(v2[j], v2[j + 1]);
                }
            }
        }
        if (is_sorted(v2.begin(), v2.end()) && ans.size() <= 1000)
        {
            cout << ans.size() << endl;
            for (int i = 0; i < ans.size(); i++)
            {
                cout << ans[i].first + 1 << " " << ans[i].second + 1 << endl;
            }
        }
        else
        {
            cout << "-1" << endl;
        }
    }
}

// 5
// 2 1 5 4 3
// 5
// 3 2 1 2 1