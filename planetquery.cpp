#include <bits/stdc++.h>
using namespace std;

long long calculate(long long p, long long q)
{
    long long mod = 1000000007, expo;
    expo = mod - 2;
    while (expo)
    {
        if (expo & 1)
        {
            p = (p * q) % mod;
        }
        q = (q * q) % mod;
        expo >>= 1;
    }
    return p;
}

int main(){
    cout << calculate(1,1);
}