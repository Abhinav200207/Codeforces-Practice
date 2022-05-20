#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> v;
        v.push_back(2);
        for (int i = 3; i < n + 2; i++){
            v.push_back(i);
        }
        for (int i = 0; i < n; i++){
            cout << v[i] << " ";
        }
    }
}