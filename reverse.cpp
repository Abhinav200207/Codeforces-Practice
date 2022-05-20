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
        int curr;
        int index;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != i + 1)
            {
                // cout << "hello";
                index = i + 1;
                curr = v[i];
                break;
            }
        }
        int lastIndex = 0;
        // cout << curr << " " << index << endl;
        for (int i = index; i < n; i++)
        {
            if (v[i] == index)
            {
                lastIndex = i + 1;
                // cout << v[i] << " " << i + 1;
                break;
            }
        }
        reverse(v.begin() + index - 1,v.begin() + lastIndex);
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}