#include <bits/stdc++.h>
using namespace std;

int main()
{
    // cout << "hello" << endl;
    // cout << "world" << endl;

    int n, x;
    cin >> n >> x;
    int count = 0;

    for (int i = 1; i <= n ; i++){
        if (x%i == 0 && x/i <= n){
            // cout << i << endl;
            count++;
        }
    }
    cout << count;
}