#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        char mini = '9';
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] <= mini)
                mini = s[i];
            else
                s[i] = min((char)(s[i] + 1), (char)'9');
        }
        sort(s.begin(), s.end());
        cout << s << endl;
    }
}