#include <bits/stdc++.h>
using namespace std;

// 4
// 3
// 2 3 7 12 2
// 4
// 9 1 7 1 6 5
// 29 - 9 = 20 - 11 = 9
// 5
// 18 2 2 3 2 9 2
// 3
// 2 6 9 2 1
// 20 - 9 = 11 - 2

void solve(int n, vector<long long int> v)
{
    int maxfirst = 0, maxsecond;
    priority_queue<long long int> pq;
    for (int i = 0; i < n; i++)
    {
        pq.push(v[i]);
    }
    maxfirst = pq.top();
    pq.pop();
    maxsecond = pq.top();
    pq.pop();
    pq.empty();
    
    long long int sumarr = accumulate(v.begin(), v.end(), 0);
    long long int temp1 = sumarr - maxfirst;
    long long int temp2 = sumarr - maxsecond;

    if (binary_search(v.begin(), v.end(), temp1) || binary_search(v.begin(), v.end(), temp2))
    {
        
    }
}

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<long long int> v(n);
        for (long long int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        solve(n, v);
    }
}