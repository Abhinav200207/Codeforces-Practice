#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    cin >> n >> q;
    set<int> row;
    set<int> col;
    map<int, int> rowFreq;
    map<int, int> colFreq;
    for (int i = 1; i <= n; i++)
    {
        row.insert(i);
        col.insert(i);
    }
    while (q--)
    {
        int tt;
        cin >> tt;
        int x, y;
        cin >> x >> y;
        if (tt == 1)
        {
            // int x,y;cin>>x>>y;
            rowFreq[x]++;
            colFreq[y]++;
            row.erase(x);
            col.erase(y);
        }
        else if (tt == 2)
        {
            // int x,y;cin>>x>>y;
            rowFreq[x]--;
            colFreq[y]--;
            if (rowFreq[x] == 0)
                row.insert(x);
            if (colFreq[y] == 0)
                col.insert(y);
        }
        else
        {
            int xb, yb;
            cin >> xb >> yb;

            if (row.find(x) == row.end() && row.find(xb) == row.end())
            {
                if (row.lower_bound(x) == row.lower_bound(xb))
                {
                    cout << "Yes\n";
                    continue;
                }
            }
            if (col.find(y) == col.end() && col.find(yb) == col.end())
            {
                if (col.lower_bound(y) == col.lower_bound(yb))
                {
                    cout << "Yes\n";
                    continue;
                }
            }
            cout << "NO\n";
        }
    }
}