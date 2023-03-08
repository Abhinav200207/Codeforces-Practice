#include <bits/stdc++.h>
using namespace std;

int main()
{
    double t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            cout << "No" << endl;
        }
        else
        {
            // double k = (3 * n + 3) / 2;
            // for (double i = 0; i < n; i++)
            // {
            //     cout << k++ << " ";
            // }
            vector<double> l;
            double x = 1;
            for (double i = 1; i <= n; i++)
            {
                l.push_back((double)n + x);
                x += 0.5;
            }

            vector<double> r;
            double y = 0.5;
            for (double i = 1; i <= n; i++)
            {
                r.push_back((double)n / 2 + y);
                y += 0.5;
            }

            for (int i = 0; i < n; i++){
                cout << l[i] << " " << r[i] << endl;
            }
            cout << endl;
        }
    }
}