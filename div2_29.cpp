#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<long long int> v(n);
        for (long long int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        vector<long long int> newv(v.begin() + 1, v.end() - 1);
        // for (auto i : newv)
        // {
        //     cout << i << endl;
        // }
        long long int ans = INT_MAX;
        long long int ans1 = INT_MAX;
        long long int ans2 = INT_MAX;
        for (auto i : newv)
        {
            ans = min(ans, abs(v[0] - v[n - 1]) + abs(v[0] - i));
        }
        for (auto i : newv)
        {
            ans1 = min(ans1, abs(i - v[n - 1]) + abs(i - v[0]));
        }
        for (auto i : newv)
        {
            ans2 = min(ans2, abs(v[n - 1] - v[0]) + abs(v[n - 1] - i));
        }

        // mid and min odd
        vector<long long int> vnew1;
        for (long long int i = 1; i < n; i++)
        {
            if (i != n / 2)
                vnew1.push_back(v[i]);
        }
        long long int ans3 = INT_MAX;
        long long int ans4 = INT_MAX;
        long long int ans5 = INT_MAX;
        for (auto i : vnew1)
        {
            ans3 = min(ans3, abs(v[0] - v[n / 2]) + abs(v[0] - i));
        }
        for (auto i : vnew1)
        {
            ans4 = min(ans4, abs(i - v[n / 2]) + abs(i - v[0]));
        }
        for (auto i : vnew1)
        {
            ans5 = min(ans5, abs(v[n / 2] - v[0]) + abs(v[n / 2] - i));
        }

        // mid and max odd
        vector<long long int> vnew2;
        for (long long int i = 0; i < n - 1; i++)
        {
            if (i != n / 2)
                vnew2.push_back(v[i]);
        }
        long long int ans6 = INT_MAX;
        long long int ans7 = INT_MAX;
        long long int ans8 = INT_MAX;
        for (auto i : vnew2)
        {
            ans6 = min(ans6, abs(v[n - 1] - v[n / 2]) + abs(v[n - 1] - i));
        }
        for (auto i : vnew2)
        {
            ans7 = min(ans7, abs(i - v[n / 2]) + abs(i - v[n - 1]));
        }
        for (auto i : vnew2)
        {
            ans8 = min(ans8, abs(v[n / 2] - v[n - 1]) + abs(v[n / 2] - i));
        }

        // mid1 and max even
        vector<long long int> vnew3;
        for (long long int i = 0; i < n - 1; i++)
        {
            if (i != n / 2 - 1)
                vnew3.push_back(v[i]);
        }
        long long int ans9 = INT_MAX;
        long long int ans10 = INT_MAX;
        long long int ans11 = INT_MAX;
        for (auto i : vnew3)
        {
            ans9 = min(ans9, abs(v[n - 1] - v[n / 2 - 1]) + abs(v[n - 1] - i));
        }
        for (auto i : vnew3)
        {
            ans10 = min(ans10, abs(i - v[n / 2 - 1]) + abs(i - v[n - 1]));
        }
        for (auto i : vnew3)
        {
            ans11 = min(ans11, abs(v[n / 2 - 1] - v[n - 1]) + abs(v[n / 2 - 1] - i));
        }

        // mid1 and min even
        vector<long long int> vnew4;
        for (long long int i = 1; i < n; i++)
        {
            if (i != n / 2 - 1)
                vnew4.push_back(v[i]);
        }
        long long int ans12 = INT_MAX;
        long long int ans13 = INT_MAX;
        long long int ans14 = INT_MAX;
        for (auto i : vnew4)
        {
            ans12 = min(ans12, abs(v[0] - v[n / 2 - 1]) + abs(v[0] - i));
        }
        for (auto i : vnew4)
        {
            ans13 = min(ans13, abs(i - v[n / 2 - 1]) + abs(i - v[0]));
        }
        for (auto i : vnew4)
        {
            ans14 = min(ans14, abs(v[n / 2 - 1] - v[0]) + abs(v[n / 2 - 1] - i));
        }

        long long int finalans1 = max(ans, max(ans1, ans2));
        // cout << finalans1 << endl;
        long long int finalans2 = max(ans3, max(ans4, ans5));
        // cout << finalans2 << endl;
        long long int finalans3 = max(ans6, max(ans7, ans8));
        // cout << finalans3 << endl;
        long long int finalans4 = max(ans9, max(ans10, ans11));
        // cout << finalans4 << endl;
        long long int finalans5 = max(ans12, max(ans13, ans14));
        // cout << finalans5 << endl;

        long long int finalfinal = max(max(finalans1, finalans2), max(finalans3, finalans4));

        cout << max(finalans5, finalfinal) << endl;
        // cout << endl;
    }
}