
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define setbits(x) __builtin_popcount(x)
#define unsetbits(x) __builtin_ctz(x)
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define print(arr)        \
    for (auto i : arr)    \
        cout << i << " "; \
    cout << endl;
// rotate(a.begin(), a.begin() + p, a.end());

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    /*sort(vector.begin(), vector.end(), [](const auto& x, const auto& y)
                {   return x[0]!=y[0] ? x[0]<y[0] : x[1]>y[1];    }
    );
    code to sort vector in increasing order of interval , if
    start of intervals are same then the interval having higher end
    is sorted first */
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        int a[3] = {0};
        int b[3] = {0};
        int ans = 1;
        vector<deque<int>> vec(3);
        for (int i = 0; i < n; i++)
        {
            if (s[i] != t[i])
                ans = 0;
            a[s[i] - 'a']++;
            b[t[i] - 'a']++;
            vec[s[i] - 'a'].pb(i);
        }
        if (a[0] != b[0] || a[1] != b[1] || a[2] != b[2])
        {
            cout << "NO" << endl;
            continue;
        }
        if (ans == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        ans = 1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == t[i])
            {
                vec[s[i] - 'a'].pop_front();
                continue;
            }
            if (s[i] == 'a' && t[i] == 'b')
            {
                if (vec[2].size() > 0 && vec[1].size() > 0 && vec[2].front() < vec[1].front())
                {
                    ans = 0;
                    break;
                }
                else
                {
                    int x = vec[1].front();
                    vec[1].pop_front();
                    swap(s[i], s[x]);
                }
            }
            else if (s[i] == 'b' && t[i] == 'c')
            {
                if (vec[0].size() > 0 && vec[2].size() > 0 && vec[0].front() < vec[2].front())
                {
                    ans = 0;
                    break;
                }
                else
                {
                    int x = vec[2].front();
                    vec[2].pop_front();
                    swap(s[i], s[x]);
                }
            }
            else
            {
                ans = 0;
                break;
            }
            if (ans == 0)
                break;
        }
        // cout<<s<<" "<<t<<endl;
        if (ans == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}