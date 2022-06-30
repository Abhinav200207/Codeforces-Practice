#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout << "Start Here: " << t << endl;
        int n;
        cin >> n;
        vector<int> a(n + 1);
        vector<int> b(n + 1);
        vector<int> c(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
            cin >> b[i];
        for (int i = 1; i <= n; i++)
            cin >> c[i];
        vector<int> table(n + 1);
        int p = 0;
        for (int i = 1; i <= n; i++)
        {
            table[c[i]]++;
        }
        cout << endl;
        cout << endl;
        cout << endl;
        for (int i = 1; i <= n; i++)
        {
            cout << table[i] << " ";
        }
        cout << endl;
        for (int i = 1; i <= n; i++)
        {
            if (table[a[i]] == 0 && table[b[i]] == 0 && a[i] != b[i])
            {
                table[a[i]] = 1;
                table[b[i]] = 1;
                cout << a[i] << " " << b[i] << endl;
                p++;
            }
            if (table[a[i]] > 1 && table[b[i]] > 1)
            {
                table[a[i]]--;
                table[b[i]]--;
                p--;
            }
            else
            {
                table[a[i]]++;
                table[b[i]]++;
            }
        }
        cout << endl;
        cout << endl;
        cout << endl;
        cout << p << endl;
        cout << pow(2, p) << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "End Here: " << t << endl;
    }
}

// 6
// 1 5 2 4 6 3
// 6 5 3 1 4 2
// 6 0 0 0 0 0
