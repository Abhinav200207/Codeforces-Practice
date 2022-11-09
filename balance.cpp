#include <bits/stdc++.h>
using namespace std;

long long int fun(unordered_set<long long int> &st, long long int n, unordered_map<long long int, long long int> &mp)
{
    long long int i;
    if (mp.find(n) != mp.end())
    {
        i = mp[n];
    }
    else
    {
        i = 0;
    }
    while (true)
    {
        long long int temp = n * i;
        if (st.find(temp) == st.end())
        {
            mp[n] = i;
            return temp;
        }
        i++;
    }
    return -1;
}

int main()
{
    long long int q;
    cin >> q;
    unordered_set<long long int> st;
    st.insert(0);
    unordered_map<long long int, long long int> mp;
    while (q--)
    {
        string o;
        long long int n;
        cin >> o >> n;
        if (o == "+")
        {
            st.insert(n);
        }
        else
        {
            cout << fun(st, n, mp) << endl;
        }
    }
}