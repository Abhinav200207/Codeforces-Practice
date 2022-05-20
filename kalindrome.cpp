// #include <bits/stdc++.h>

// using namespace std;

// bool solveleft(long long int n, vector<long long int> v)
// {
//     long long int i = 0;
//     long long int j = n - 1;
//     long long int d = -1;
//     while (i < j)
//     {
//         if (v[i] == v[j])
//         {
//             i++;
//             j--;
//             continue;
//         }
//         if (d == -1)
//         {
//             d = v[i];
//             i++;
//             continue;
//         }
//         if (v[i] == d)
//         {
//             i++;
//             continue;
//         }
//         if (v[i] != d)
//         {
//             return false;
//         }
//     }
//     return true;
// }
// bool solveright(long long int n, vector<long long int> v)
// {
//     long long int i = 0;
//     long long int j = n - 1;
//     long long int d = -1;
//     while (i < j)
//     {
//         if (v[i] == v[j])
//         {
//             i++;
//             j--;
//             continue;
//         }
//         if (d == -1)
//         {
//             d = v[j];
//             j--;
//             continue;
//         }
//         if (v[j] == d)
//         {
//             j--;
//             continue;
//         }
//         if (v[j] != d)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// void solve(long long int n, vector<long long int> v)
// {
//     if (solveleft(n, v) || solveright(n, v))
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }
// }

// long long int main()
// {
//     long long int t;
//     cin >> t;
//     while (t--)
//     {
//         long long int n;
//         cin >> n;
//         vector<long long int> v(n);
//         for (long long int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//         }
//         solve(n, v);
//     }
// }

// // 4
// // 1
// // 1
// // 2
// // 1 2
// // 3
// // 1 2 3
// // 5
// // 1 4 4 1 4

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int M=1e9+7;

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int power(int a,int n){
    if(n==0)return 1;
    else if(n==1)return a;
    else{
    int r=power(a,n/2);
    if(n%2==0){
        return r*r;
    }
    else{
        return r*a*r;
    }
    }
}
ll power_mod(ll a, ll b) { 
    long long int ans=1ll; 
    while(b) { 
        if(b&1)ans=(ans*a)%M; 
        a=(a*a)%M; 
        b=b/2; 
    } 
    return ans; 
}
int gcd(int a,int b){
    if(b==0){
       return a;
    }
    return gcd(b,a%b);
}
int findGCD_of_array(int arr[], int n){
    int result = arr[0];
    for (int i = 1; i < n; i++)
        result = gcd(arr[i], result);
        return result;
}
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)  return false;
 
    // Check from 2 to n-1
    for (int i=2; i<n; i++)
        if (n%i == 0)
            return false;
 
    return true;
}
int fact(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
ll factorial(ll n){
    ll f=1;
    while(n>2){
        f=f*n;
        f=f%M;
        n--;
    }
    return f;

}

ll sqrtt(ll n){
    ll l=1;
    ll h=n;
    ll ans=0;
    while(l<=h){
        ll mid=(h-l)/2+l;
        if((mid*mid)<=n){
            ans=mid;
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    return ans;
}
bool isPal(vector<int> &v){
    int n=v.size();
    int i=0;
    int j=n-1;
    while(i<j){
        if(v[i]!=v[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;

}
bool check(vector<int> &v,int x){
    vector<int> z;
    int n=v.size();
    for(int i=0;i<n;i++){
        if(v[i]!=x){
            z.push_back(v[i]);
        }
    }
    if(isPal(z)){
        return true;
    }
    else{
        return false;
    }
}
void solve(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(n==1 || n==2){
        cout<<"YES"<<endl;
        return;
    }
    if(isPal(v)){
        cout<<"YES"<<endl;
        return;
    }
    int i=0;
    int j=n-1;
    while(i<j){
        if(v[i]!=v[j]){
            if(check(v,v[i])){
                cout<<"YES"<<endl;
                return;
            }
            if(check(v,v[j])){
                cout<<"YES"<<endl;
                return;
            }
            cout<<"NO"<<endl;
            return;
        }
        i++;
        j--;
    }
    cout<<"NO"<<endl;
    

}

int main(){
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}