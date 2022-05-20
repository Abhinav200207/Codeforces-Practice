#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int> (m));
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        for (int j = 0; j < m; ++j) {
            a[i][j] = s[j] - '0';
        }
    }
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < m - 1; ++j) {
            int sum = a[i][j] + a[i][j + 1] + a[i + 1][j] + a[i + 1][j + 1];
            if (sum == 3) {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while (t--)
        solve();
}

/*
vector<int> v(triangle.size()*2);
        for (int i = 0; i < triangle.size(); i++){
            for (int j = 0; j <= i; j++){
                triangle[i][j] 
            }
        }
*/