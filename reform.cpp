#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,x;
        cin >> n >> x;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        
    }
}

// 4 3
// 5 1 2 1
// 1 1 2 5
// 4 10
// 11 9 11 9
// 2 5
// 4 3
// 3 7
// 9 4 9
