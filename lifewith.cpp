#include<bits/stdc++.h>
using namespace std;

int removeZeros(int num) {
    int ret = 0;
    int ten = 1;
    while (num) {
        int dig = num % 10;
        num /= 10;
        if (dig) {
            ret += dig * ten;
            ten *= 10;
        }
    }
    return ret;
}
 
int main() {
    int a, b, c;
    cin >> a >> b;
    c = a + b;
    a = removeZeros(a);
    b = removeZeros(b);
    c = removeZeros(c);
    if (a + b == c)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}