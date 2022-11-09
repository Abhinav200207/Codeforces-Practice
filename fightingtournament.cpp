#include <bits/stdc++.h>
using namespace std;

vector<int> nextLargerElement(vector<int> arr1, int n)
{
    vector<int> arr(arr1.begin() + 1, arr1.end());
    vector<int> v(n, -1);
    stack<int> s;
    s.push(0);
    for (int i = 1; i < n; i++)
    {
        while (!s.empty() && arr[i] > arr[s.top()])
        {
            v[s.top()] = arr[i];
            s.pop();
        }
        s.push(i);
    }
    for (int i = 1; i < n; i++)
    {
        if (v[i] == -1)
        {
            v[i] = arr[i];
        }
    }
    reverse(v.begin(),v.end());
    v.push_back(0);
    reverse(v.begin(),v.end());
    return v;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> v(n + 1);
        vector<int> f(n + 1);
        vector<int> prev(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            if (i >= 2)
            {
                prev[i] = max(v[i], prev[i - 1]);
            }
            else
            {
                prev[i] = v[i];
            }
            f[v[i]] = i;
        }
        cout << endl;
        cout << endl;
        vector<int> next = nextLargerElement(v, n);
        for (int i = 1; i <= n; i++)
        {
            cout << f[i] << " ";
        }
        cout << endl;
        for (int i = 1; i <= n; i++)
        {
            cout << prev[i] << " ";
        }
        cout << endl;
        for (int i = 1; i <= n; i++)
        {
            cout << next[i] << " ";
        }
        cout << endl;
        while (q--)
        {
            int i, k;
            cin >> i >> k;
            if (prev[i] > v[i] || v[i] < v[i + 1])
            {
                cout << 0 << endl;
            }
            else
            {
                if (i - 1 > k)
                {
                    cout << 0 << endl;
                }
                else
                {
                    if (f[next[i]] - 2 <= k){
                        cout << f[next[i]] - i << endl;
                    }
                    else{
                        cout << k - i + 2 << endl;
                    }
                }
            }
            cout << endl;
        }
    }
}