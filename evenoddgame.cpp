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
        priority_queue<long long int> pq;
        for (long long int i = 0; i < n; i++)
        {
            long long int a;
            cin >> a;
            pq.push(a);
        }
        long long int flag = 0;
        long long int global = 0;
        while (pq.size())
        {
            long long int top = pq.top();
            pq.pop();
            if (flag == 0)
            {
                if (top % 2 == 0)
                {
                    global += top;
                }
                flag = 1;
            }
            else
            {
                if (top % 2 == 1)
                {
                    global -= top;
                }
                flag = 0;
            }
        }
        if (global == 0)
        {
            cout << "Tie\n";
        }
        else if (global < 0)
        {
            cout << "Bob\n";
        }
        else
        {
            cout << "Alice\n";
        }
    }
}