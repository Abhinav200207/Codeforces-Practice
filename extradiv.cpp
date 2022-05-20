#include <bits/stdc++.h>
using namespace std;
void solve(int n);

int main()
{
    int n;
    cin >> n;
    solve(n);
}

void solve(int n)
{
    int counteven = 0;
    int countodd = 0;
    for (int i = 1; i<= n/2+1;i++){
        if (n%i == 0){
            if (i%2 == 0){
                counteven++;
            }
            else{
                countodd++;
            }
        }
    }
    if (counteven == countodd){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}