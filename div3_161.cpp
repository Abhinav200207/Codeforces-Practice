#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        int index = -1;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == c)
            {
                cnt++;
            }
            if (s[i] == 'g' && index == -1)
            {
                index = i;
            }
        }
        s = s + s.substr(0, index + 1);
        // cout << s << endl;
        if (c == 'g')
        {
            cout << 0 << endl;
        }
        else
        {
            int temp = 0;
            int maxans = 0;
            int flag = 0;
            for (int i = 0; i < s.length(); i++)
            {
                // cout << temp << " " << maxans << " " << flag << endl;
                if (cnt < 0)
                {
                    break;
                }
                else if (s[i] == c && flag == 0)
                {
                    temp = 1;
                    cnt--;
                    flag = 1;
                }
                else if (s[i] == 'g')
                {
                    maxans = max(maxans, temp);
                    flag = 0;
                }
                else if (flag == 1)
                {
                    temp += 1;
                }
            }
            cout << max(temp,maxans) << endl;
        }
    }
}