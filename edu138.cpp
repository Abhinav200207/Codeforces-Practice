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
        multiset<int> st,st1;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            st.insert(v[i]);
        }

        if (v.size() == 1)
        {
            if (*st.begin() <= 1)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
        else
        {
            int low = 0,high = n,ans = 0;
            while (low <= high){
                int mid = (low + high) / 2;

                st1 = st;

                int fg = 1;

                for (int i = 1; i <= mid; i++){
                    auto x = st1.upper_bound(mid + 1 - i);
                    if (x == st1.begin()){
                        fg = 0;
                        break;
                    }else{
                        --x;
                        st1.erase(st1.find(*x));
                        auto y = st1.begin();
                        st1.erase(st1.find(*y));
                        st1.insert(*y + i - 1 + mid);
                    }
                }
                if (!fg){
                    high = mid - 1;
                }else{
                    ans = mid;
                    low = mid + 1;
                }
            }
            cout << ans << endl;
        }
    }
}