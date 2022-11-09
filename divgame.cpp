#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;
    if (n == 1)
    {
        if (k > n)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
        return 0;
    }
    vector<long long int> ans1;
    vector<long long int> ans2;
    for (long long int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ans1.push_back(i);
            ans2.push_back(n / i);
        }
    }
    reverse(ans2.begin(), ans2.end());
    for (long long int i = 0; i < ans2.size(); i++)
    {
        ans1.push_back(ans2[i]);
    }
    if (ans1.size() < k)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans1[k - 1] << endl;
    }
}