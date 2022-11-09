#include <bits/stdc++.h>
using namespace std;

long long int abhinav[200001], bobby[200001];

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> abhinav[i];
        }
        if (n == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            for (int i = 2; i <= n; i++)
            {
                bobby[i] = abhinav[i] < abhinav[i - 1];
            }

            vector<pair<bool, long long int>> v;
            v.push_back(make_pair(bobby[2], 1));
            for (int i = 3; i <= n; i++)
            {
                if (bobby[i] == v[v.size() - 1].first)
                {
                    v[v.size() - 1].second++;
                }
                else
                {
                    v.push_back(make_pair(bobby[i], 1));
                }
            }
            v.push_back(make_pair(0, 0));

            long long int ans = 0;
            for (int i = 0; i < v.size() - 1; ++i)
            {
                ans += v[i].second * (v[i].second + 1) / 2;
            }
            for (int i = 0; i < v.size() - 1; ++i)
            {
                if (v[i].first == 1)
                {
                    ans += v[i].second * (v[i + 1].second + 1) / 2;
                }
            }
            cout << ans + n << endl;
        }
    }
}