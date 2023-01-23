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
        int flag = 0;
        vector<int> freq(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            freq[v[i]]++;
            if ((v[i] == 1 && freq[v[i]] > 1) || (freq[v[i]] > 2))
            {
                flag = 1;
            }
        }
        if (flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            int flag = 0;
            unordered_set<int> st;
            vector<int> ans1(n, -1);
            for (int i = 0; i < n; i++)
            {
                if (st.count(v[i]) == 0)
                {
                    ans1[i] = v[i];
                    st.insert(v[i]);
                }
            }
            int cnt = n;
            for (int i = 0; i < n; i++)
            {
                if (ans1[i] == -1)
                {
                    while (cnt > 0)
                    {
                        if (st.count(cnt))
                        {
                            cnt--;
                        }
                        else
                        {
                            break;
                        }
                    }
                    st.insert(cnt);
                    ans1[i] = cnt;
                }
            }
            unordered_set<int> st1;
            vector<int> ans2(n, -1);
            for (int i = 0; i < n; i++)
            {
                if (ans1[i] != v[i])
                {
                    ans2[i] = v[i];
                    st1.insert(v[i]);
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (ans2[i] == -1 && st1.count(ans1[i]) == 0)
                {
                    st1.insert(ans1[i]);
                    ans2[i] = ans1[i];
                }
            }

            for (int i = 0; i < n; i++)
            {
                if (ans2[i] == -1)
                {
                    int cnt = v[i];
                    while (cnt > 0)
                    {
                        if (st1.count(cnt))
                        {
                            cnt--;
                        }
                        else
                        {
                            break;
                        }
                    }
                    ans2[i] = cnt;
                    st1.insert(cnt);
                }
                if (ans2[i] == 0)
                    flag = 1;
            }
            if (flag)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
                for (int i = 0; i < n; i++)
                {
                    cout << ans1[i] << " ";
                }
                cout << endl;
                for (int i = 0; i < n; i++)
                {
                    cout << ans2[i] << " ";
                }
                cout << endl;
            }
        }
    }
}
