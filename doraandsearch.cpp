#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    int maxi = n, mini = 1;
    int i = 1, j = n;

    while (i < j)
    {
        if (v[i] != maxi && v[i] != mini && v[j] != maxi && v[j] != mini)
        {
            cout << i << " " << j << endl;
            return;
        }
        else if (v[i] == maxi)
        {
            i++;
            maxi--;
        }
        else if (v[i] == mini)
        {
            i++;
            mini++;
        }
        else if (v[j] == maxi)
        {
            j--;
            maxi--;
        }
        else if (v[j] == mini)
        {
            j--;
            mini++;
        }
    }
    cout << -1 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}