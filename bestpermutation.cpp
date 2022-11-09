#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n%2){
            
        }else{
            for (int i = n - 2; i >= 1; i--){
                cout << i << " ";
            }
            cout << n - 2 << " " << n << endl;
        }
    }
}