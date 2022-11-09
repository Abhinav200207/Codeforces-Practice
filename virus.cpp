#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        vector<long long int> v(k);
        for (long long int i = 0; i < k; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        vector<long long int> diff;
        for (int i = 0; i < k - 1; i++){
            diff.push_back(v[i + 1] - v[i] - 1);
        }
        diff.push_back(v[0] + n - v[k - 1] - 1);

        int terminated = 0;
        int safe = 0;

        sort(diff.begin(), diff.end(),greater<int>());

        for (int i = 0; i < diff.size(); i++){
            int curr = diff[i];
            int actual = curr - (terminated*2);
            if (actual <= 0) break;
            safe += (actual - 1);
            if (actual == 1) safe++;
            terminated += 2;
        }

        cout << n - safe << endl;
    }
}