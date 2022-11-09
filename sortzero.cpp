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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> temp;
        unordered_set<int> st;

        for (int i = 0; i < n; i++)
        {
            if (st.find(v[i]) != st.end())
            {
                if (temp.size() && temp[temp.size() - 1] != 0)
                {
                    for (auto j : temp)
                    {
                        if (j != 0)
                            st.insert(j);
                    }
                    temp.clear();
                    temp.push_back(0);
                }
                else
                {
                    temp.push_back(0);
                }
            }
            else
            {
                if (temp.size() && temp[temp.size() - 1] > v[i])
                {
                    for (auto j : temp)
                    {
                        if (j != 0)
                            st.insert(j);
                    }
                    temp.clear();
                    if (st.find(v[i]) != st.end())
                    {
                        temp.push_back(0);
                    }
                    else
                    {
                        temp.push_back(v[i]);
                    }
                }
                else
                {
                    temp.push_back(v[i]);
                }
            }
        }
        cout << st.size() << endl;
    }
}