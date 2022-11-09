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
        vector<int> v(n + 1);
        int cnt = 1;
        for (int i = 1; i <= n; i = i + 2)
        {
            v[i] = cnt++;
        }
        cnt = n;
        for (int i = 2; i <= n; i = i + 2)
        {
            v[i] = cnt--;
        }
        for (int i = 1; i <= n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}