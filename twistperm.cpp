#include <bits/stdc++.h>
using namespace std;

int fun(vector<int> v, vector<int> table, int curr_idx, int n, unordered_set<int> st)
{
    for (int i = curr_idx; i < n; i++)
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_set<int> st;
        vector<int> table(n + 1, 0);
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            table[v[i]] = i;
        }
        int curr_idx = 1;
        vector<int> ans(n + 1);
        for (int i = n; i > 0; i--)
        {
            
        }
    }
}