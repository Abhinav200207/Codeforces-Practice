#include <bits/stdc++.h>
using namespace std;

int main(){
    int s,n;
    cin >> s >> n;
    vector<pair<int,int>> v;
    for (int i = 0; i < n;i++){
        int a,b;
        cin >> a >> b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    int i = n - 1;
    while(1){
        if (i == 0 && v[i].first < s){
            cout << "YES" << endl;
            break;
        }
        if (v[i].first >= s){
            cout << "NO" << endl;
            break;
        }
        s += v[i].second;
        i--;
    }
}

// 2 2
// 1 99
// 100 0
