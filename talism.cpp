#include <bits/stdc++.h>
using namespace std;

int fun(int n)
{
    int op = 0;
    while (n % 2 == 0){
        op++;
        n = n / 2;
    }
    return op;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int minnum = INT_MAX;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            minnum = min(minnum, v[i]);
            if (v[i] % 2)
            {
                cnt++;
            }
        }
        if (cnt == 0)
        {
            cnt = fun(v[0]);
            for (int i = 0; i < n; i++){
                cnt = min(cnt,fun(v[i]));
            }
            cout << n - 1 + cnt << endl;
        }
        else
        {
            cout << n - cnt << endl;
        }
    }
}