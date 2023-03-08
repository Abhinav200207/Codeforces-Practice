#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a == 0){
            cout << 1 << endl;
            continue;
        }
        int as = a, bs = a;
        int ans = a;
        while (true)
        {
            // cout << b << " " << c << endl;
            // cout << as << " " << bs << endl;
            if (b == 0 && c == 0)
            {
                // cout << "HELLO1\n";
                break;
            }
            if (as != 0)
            {
                if (c < as)
                {
                    ans += c;
                    bs += c;
                    c = 0;
                    as = as - c;
                }
                else
                {
                    // cout << "HELLO100\n";
                    ans += as;
                    c = c - as;
                    bs += as;
                    as = 0;
                }
            }
            if (bs != 0)
            {
                if (b < bs)
                {
                    ans += b;
                    as += b;
                    b = 0;
                    bs = bs - b;
                }
                else
                {
                    ans += bs;
                    b = b - bs;
                    as += bs;
                    bs = 0;
                }
            }
            if ((as == 0 && b == 0) || (bs == 0 && c == 0))
            {
                ans += 1;
                // cout << "HELLO2\n";
                break;
            }
            else if (bs == 0 && as == 0)
            {
                ans += 1;
                // cout << "HELLO3\n";
                break;
            }
        }
        cout << ans << endl;
    }
}