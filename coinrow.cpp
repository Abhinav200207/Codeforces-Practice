#include <bits/stdc++.h>
using namespace std;

void printvector(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

void printtwovector(vector<vector<int>> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;
        vector<vector<int>> v(2, vector<int>(m, 0));
        for (int i = 0; i < 2; i++)
        {
            vector<int> temp(m);
            for (int j = 0; j < m; j++)
            {
                cin >> temp[j];
            }
            v[i] = temp;
        }
        int sum1 = 0;
        for (int i = 0; i < m; i++)
        {
            sum1 += v[0][i];
        }
        int sum2 = 0;
        int ans = INT_MAX;
        for (int i = 0; i < m; i++)
        {
            sum1 -= v[0][i];
            ans = min(ans,max(sum1,sum2));
            sum2 += v[1][i];
        }
        cout << ans << endl;
    }
}