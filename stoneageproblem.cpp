#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, q;
    cin >> n >> q;
    vector<long long int> v(n + 1);
    unordered_map<long long int, long long int> mp;
    long long int sum = 0;
    long long int signal = -1;
    for (long long int i = 1; i <= n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    while (q--)
    {
        long long int op;
        cin >> op;
        if (op == 1)
        {
            long long int idx, x;
            cin >> idx >> x;
            if (signal == -1)
            {
                if (mp.find(idx) != mp.end())
                {
                    sum = sum - mp[idx] + x;
                    mp[idx] = x;
                    cout << sum << endl;
                }
                else
                {
                    // cout << "Hello" << endl;
                    sum = sum - v[idx] + x;
                    mp[idx] = x;
                    cout << sum << endl;
                }
            }
            else
            {
                if (mp.find(idx) != mp.end())
                {
                    sum = sum - mp[idx] + x;
                    mp[idx] = x;
                    cout << sum << endl;
                }
                else
                {
                    sum = sum - signal + x;
                    mp[idx] = x;
                    cout << sum << endl;
                }
            }
        }
        else
        {
            long long int x;
            cin >> x;
            signal = x;
            sum = n * x;
            mp.clear();
            cout << sum << endl;
        }
    }
}