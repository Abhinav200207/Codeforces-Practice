#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<long long int> v(8,0);
        for (int i = 1; i < 8; i++)
        {
            cin >> v[i];
        }
        cout << v[1] << " " << v[7] - v[1] - v[2] << " " << v[2] << endl;
    }
}
// 5
// 1 3 4 4 5 7 8
// 1 2 3 4 5 6 7
// 300000000 300000000 300000000 600000000 600000000 600000000 900000000
// 1 1 2 999999998 999999999 999999999 1000000000
// 1 2 2 3 3 4 5


// a + b + c = a7
// a = a1
// b = a2
// c = a7 - a - b