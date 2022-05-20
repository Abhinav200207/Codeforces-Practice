#include <bits/stdc++.h>

using namespace std;

using li = long long;

// 6
// 1 1 1 3 5 5
// 8
// -1 -1 -1 0 0 0 1 1
// 4
// -1000 -1000 -1000 100

void solve(int n, vector<li> v)
{
    bool inf = true;
    li minval = v[0];

    for (int i = 1; i < n; i++)
    {
        if (v[i] != v[0])
        {
            inf = false;
            break;
        }
        minval = min(minval, v[i]);
    }

    if (inf)
    {
        cout << "-1\n";
    }
    else
    {
        set<li> s;
        for (li i = 0; i < n; i++)
        {
            s.insert(v[i]);
        }
        cout << *(++s.begin()) - *(s.begin()) << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        vector<li> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        solve(n, v);
    }
}

// using namespace std;
// #define ll long long int


// int gcd(int a,int b){
//     if(b==0){
//        return a;
//     }
//     return gcd(b,a%b);
// }



// void solve(){
//     ll n;cin>>n;
//     ll arr[n];
//     ll min_no=INT64_MAX;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         min_no=min(min_no,arr[i]);
//     }
//     int fstIdx=-1;
//     ll gxd;
//     for(int i=0;i<n;i++){
//         if(arr[i]>min_no){
//             fstIdx=i;
//             gxd=arr[i]-min_no;
//             break;
//         }
//     }
//     if(fstIdx==-1){
//         cout<<-1<<endl;
//         return;
//     }
//     for(int i=fstIdx+1;i<n;i++){
//         if(arr[i]>min_no){
//             gxd=gcd(gxd,(arr[i]-min_no));
//         }
//     }
//     cout<<gxd<<endl;
    
// }

// int main(){
//     ll t;
//     cin>>t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }