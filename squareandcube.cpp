#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        cout << floor(sqrt(n)) + floor(cbrt(n)) - floor(sqrt(cbrt(n))) << endl;
    }
}
