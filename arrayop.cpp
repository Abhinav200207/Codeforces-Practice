#include<bits/stdc++.h>
using namespace std;

int main(){
    // int t;
    // cin >> t;
    // while (t--){
        int n = 6,k = 2;
        // cin >> n >> k;
        vector<int> v{1,3,3,7,2,2};
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }
        int i = 0;
        int sizearr = v.size();
        while (i < sizearr && k > 0){
            // cout << k << endl;
            int j = 0;
            // cout << sizearr << endl;
            while(v[0] == v[j] && j < sizearr){
                j++;
            }
            if (v[0] != v[j]){
                // cout << "v[0] and v[j] " << *v.begin() << " " << *(v.begin()+j) << endl;
                k--;
                v.erase(v.begin());
                v.erase(v.begin()+j);
                cout << "after" << endl;
                for (int i = 0; i < v.size(); i++){
                    cout << v[i] << endl;
                }
                cout << "before" << endl; 
            }
            sizearr = v.size();
            i++;
        }
        int sum = 0;
        // for (int i = 0; i < v.size(); i++){
        //     cout << v[i] << endl;
        // }
        for (int i = 0; i < v.size(); i++){
            sum = sum + v[i];
        }
        cout << sum << endl;
    // }
}

// 4 2
// 1 3 3 7
// 2 0
// 4 2
// 9 2
// 1 10 10 1 10 2 7 10 3