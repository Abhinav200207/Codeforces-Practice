#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    cout << static_cast<long long>(round(n + 1.5 - sqrt(2 * (n + k) + 2.75)));
    return 0;
}