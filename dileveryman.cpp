#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,x,y,ans = 0,cnta = 0,cntb = 0;
    cin >> n >> x >> y;
    vector<long long int> a(n);
    vector<long long int> b(n);
    vector<vector<long long int>> v(n);
    for (long long int i = 0; i < n; i++){
        cin >> a[i];
    }for (long long int i = 0; i < n; i++){
        cin >> b[i];
    }for (long long int i = 0; i < n; i++){
        v[i] = {abs(a[i] - b[i]),a[i],b[i]};
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for (long long int i = 0; i < n; i++){
        if (v[i][1] > v[i][2]){
            if (cnta < x){
                ans += v[i][1];
                cnta++;
            }else{
                ans += v[i][2];
                cntb++;
            }
        }else{
            if (cntb < y){
                ans += v[i][2];
                cntb++;
            }else{
                ans += v[i][1];
                cnta++;
            }
        }
    }
    cout << ans << endl;
}