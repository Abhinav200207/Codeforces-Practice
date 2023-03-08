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
        vector<int> v(n);
        set<int> st;
        st.insert(0);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 1; i <= n; i++)
        {
            st.insert(-i);
        }
        int ans = 0, last = n, target = n, maxa = n;
        for (int i = n - 1; i >= 0; i--)
        {
            st.erase(-v[i]);
            if (v[i] == target)
            {
                int k = -(*st.begin());
                if (k == (maxa - (last - i)))
                {
                    ans++;
                    target = k;
                    maxa = k;
                    last = i;
                }
                else
                {
                    target = k;
                }
            }
        }
        cout << ans << endl;
    }
}