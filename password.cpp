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
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
        }
        int tot = 0;
        for (int i = 0; i < 10 - n; i++)
        {
            tot += i;
        }
        cout << tot*6 << endl;
    }
}