#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int n;
    cin >> n;
    unsigned long long int fact = 1;
    for (unsigned long long int i = 1; i <= n; i++)
        fact *= i;
    cout << 2 * fact / (n * n);
}