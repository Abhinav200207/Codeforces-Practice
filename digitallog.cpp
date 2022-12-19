#include <bits/stdc++.h>

#define forn(i, n) for (int i = 0; i < int(n); i++)

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    forn(_, t)
    {
        int n;
        scanf("%d", &n);
        vector<int> a(n), b(n);
        forn(i, n) scanf("%d", &a[i]);
        forn(i, n) scanf("%d", &b[i]);
        priority_queue<int> qa(a.begin(), a.end());
        priority_queue<int> qb(b.begin(), b.end());
        int ans = 0;
        while (!qa.empty())
        {
            if (qa.top() == qb.top())
            {
                qa.pop();
                qb.pop();
                continue;
            }
            ++ans;
            if (qa.top() > qb.top())
            {
                qa.push(to_string(qa.top()).size());
                qa.pop();
            }
            else
            {
                qb.push(to_string(qb.top()).size());
                qb.pop();
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}