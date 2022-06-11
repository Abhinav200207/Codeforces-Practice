#include <bits/stdc++.h>
using namespace std;

const long long int INF = 1e9 + 7;
const long long int MOD = 998244353;

long long int fun(long long int a,long long int b,long long int mod){
    if(b == 0){
        return 1;
    }
    long long int ans = fun(a,b/2,mod);
    ans *= ans;
    ans %= mod;
    if(b % 2){
        ans *= a;
    }
    return ans % mod;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n;
    cin >> n;
    long long int ans = 6;
    long long int p = 4;
    long long int t;
    for (int i = 1; i < n; i++)
    {
        t = fun(p);
        ans = (ans % mod * t % mod) % mod;
        p = p * 2;
    }
    cout << (ans);
}