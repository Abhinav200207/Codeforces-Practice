#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    vector<long long int> v(n);
    for (long long int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (long long int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            cout << 0;
        }
        // int diff = 32768 - v[i];
        int count = 0;
        while (32768 - v[i] > 0)
        {
            count++;
            v[i] = (v[i] * 2)%32768;
        }
    }
}