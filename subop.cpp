#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans = 0;
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            if (binary_search(v.begin(), v.end(), v[i] - k))
            {
                ans = 1;
            }
        }
        if (ans){
            cout << "YES";
        }else{
            cout << "NO";
        }cout << endl;
    }
}