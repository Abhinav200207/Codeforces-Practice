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
        vector<long long int> v(n);
        map<long long int, long long int> mp;
        long long int sumnum = 0;
        for (long long int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
            sumnum += v[i];
        }
        if (n == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        priority_queue<long long int> pq;
        pq.push(sumnum);
        while (pq.size() < n)
        {
            long long int x = pq.top();
            pq.pop();
            long long int p = (x / 2), q = ((x + 1) / 2);
            if (mp.count(p))
            {
                mp[p]--;
                n--;
            }
            else
            {
                pq.push(p);
            }
            if (mp[p] == 0)
            {
                mp.erase(p);
            }
            if (mp.count(q))
            {
                mp[q]--;
                n--;
            }
            else
            {
                pq.push(q);
            }
            if (mp[q] == 0)
            {
                mp.erase(q);
            }
        }
        if (pq.size() == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}