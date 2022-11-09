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
        int e = 0, o = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] % 2)
                o++;
            else
                e++;
        }

        if (o % 4 == 2)
        {
            cout << "Bob" << endl;
        }
        else if (o % 4 == 3 || o % 4 == 0)
        {
            cout << "Alice" << endl;
        }
        else
        {
            if (e % 2)
            {
                cout << "Alice" << endl;
            }
            else
            {
                cout << "Bob" << endl;
            }
        }
    }
}