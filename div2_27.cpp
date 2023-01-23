#include <bits/stdc++.h>
using namespace std;
long long int mod = 1000000007;

long long binpow(long long a, long long b)
{
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long tp1 = n;
        long long tp2 = n + 1;
        long long tp3 = (2 * n) + 1;
        long long a1 = ((tp1 * tp2) % mod * (tp3 % mod) * 2022 % mod * binpow(6, mod - 2));
        long long a2 = ((tp1 * (tp1 - 1)) % mod * (tp2 % mod) * 2022 % mod * binpow(3, mod - 2));
        cout << (a1 + a2) % mod << endl;
    }
}