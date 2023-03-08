#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a;
        cin >> n >> a;
        if (a == 1)
        {
            cout << -1 << endl;
            continue;
        }
        int flag = 0;
        vector<int> factors;
        for (int i = 2; i <= n; i++)
        {
            if (n % i == 0 && flag == 1)
            {
                factors.push_back(i);
            }
            if (n % i == 0 && a == i)
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            cout << -1 << endl;
            continue;
        }
        queue<int> pq;
        for (auto i : factors)
        {
            pq.push(i);
        }
        set<int> st;
        for (int i = 1; i <= n; i++)
        {
            st.insert(i);
        }
        st.erase(a);
        st.erase(1);

        cout << a << " ";
        for (int i = 2; i < n; i++)
        {
            if (st.count(i))
            {
                cout << i << " ";
                st.erase(i);
            }
            else
            {
                while (pq.size() && pq.front() % i != 0)
                    pq.pop();
                cout << pq.front() << " ";
                st.erase(pq.front());
                pq.pop();
            }
        }
        cout << 1 << endl;
    }
}