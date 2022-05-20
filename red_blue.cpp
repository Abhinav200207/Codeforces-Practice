#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<long long int> v(n + 1);
        for (long long int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin() + 1, v.end());
        long long int i = 1;
        long long int j = n;
        long long int sum_front = 0;
        long long int sum_back = v[1];
        long long int ans = 0;
        while (i + 1 < j)
        {
            sum_front += v[j];
            sum_back += v[i + 1];
            if (sum_front > sum_back)
            {
                ans = 1;
                break;
            }
            i++;
            j--;
        }
        if (ans){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}