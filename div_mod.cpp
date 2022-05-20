#include <bits/stdc++.h>
using namespace std;

int op(int x, int a)
{
    return floor(x / a) + x % a;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, a;
        cin >> l >> r >> a;
        int op1 = op(r,a);
        int op2 = op(r - r%a - 1,a);
        if (op2 > op1 && r - r%a - 1 >= l){
            cout << op2 << endl;
        }else{
            cout << op1 << endl;
        }
    }
}