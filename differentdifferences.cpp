#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> k >> n;
        set<int> st;
        int ptr = n;
        int diff = 1;
        while (ptr >= 1 && k > 0)
        {
            st.insert(ptr);
            ptr = ptr - diff;
            diff++;
            k--;
        }
        int str = 1;
        while (k > 0 && str <= n)
        {
            if (!st.count(str))
            {
                k--;
                st.insert(str);
            }
            str++;
        }
        for (auto i : st)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}