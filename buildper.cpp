#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int maxa = 2 * (n - 1);
        vector<int> sq;
        for (int i = 0; i * i <= maxa; i++)
            sq.push_back(i * i);
        int ptr = sq.size() - 1;
        set<int> st;
        int ans[n];

        for (int i = n - 1; i >= 0; i--)
        {
            int ot = sq[ptr] - i;
            while (ot >= n || st.find(ot) != st.end())
            {
                ptr--;
                ot = sq[ptr] - i;
            }
            ans[ot] = i;
            st.insert(ot);
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}