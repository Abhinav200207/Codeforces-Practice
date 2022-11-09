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
        string s;
        cin >> s;
        stack<char> st;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'Q')
            {
                st.push(s[i]);
            }
            else
            {
                if (!st.empty() && st.top() == 'Q')
                {
                    st.pop();
                }
                else
                {
                    st.push(s[i]);
                }
            }
        }
        int flag = 0;
        while (!st.empty())
        {
            if (st.top() == 'Q')
            {
                flag = 1;
                break;
            }
            st.pop();
        }
        flag == 0 ? cout << "YES" : cout << "NO";
        cout << endl;
    }
}