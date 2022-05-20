#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long int n, m, a;
    cin >> n >> m >> a;

    long long int divn = n / a;
    long long int divm = m / a;

    long long int ans = divn * divm;

    if (n % a != 0 && m % a != 0)
    {
        ans += m / a + n / a + 1;
    }

    else if (n % a != 0 && m % a == 0)
    {
        ans += m / a;
    }
    else if (m % a != 0 && n % a == 0)
    {
        ans += n / a;
    }
    cout << ans << endl;
}

// long long int n; cin >> n;
//     long long int totx = 0;
//     long long int toty = 0;
//     long long int totz = 0;

//     while (n--){
//         long long int a,b,c;
//         cin >> a >> b >> c;
//         totx += a;
//         toty += b;
//         totz += c;
//     }
//     if (toty == 0 && toty == 0 && totz == 0){
//         cout << "YES";
//     }
//     else{
//         cout << "NO";
//     }
