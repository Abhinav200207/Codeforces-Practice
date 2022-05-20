#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n,k;
        cin >> n >> k;
        long long int cf = (n + k - 1) / k;
        k *= cf;
        cout << (k + n - 1) / n << endl;
    }
}

// k = 5
// n = 3
// | 2 | 2 | 1 |