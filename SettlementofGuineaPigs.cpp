#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<long long int> v(n);
        for (long long int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long int cnt = 0;
        long long int av = 0;
        long long int faltu = 0;
        for (long long int i = 0; i < n; i++)
        {
            if (v[i] == 1)
            {
                cnt++;
                if (faltu > 0)
                {
                    faltu--;
                }
                else
                {
                    av++;
                }
            }
            else
            {
                faltu = av - ((long long int)(cnt / 2) + 1);
            }
        }
        cout << av << endl;
    }
}