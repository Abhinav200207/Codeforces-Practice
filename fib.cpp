#include <bits/stdc++.h>
using namespace std;
#define N 50

void fib(int n)
{
    int M[n + 2];
    int i;
    M[0] = 0;
    M[1] = 1;

    for (i = 2; i <= n; i++)
    {
        M[i] = M[i - 1] + M[i - 2];
    }
    cout << M[n] << endl;
}


int main()
{
    int t;
    cin >> t;
    fib(t);
}