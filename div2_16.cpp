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
        vector<long long int> t(n), p(n);
        for (long long int i = 0; i < n; i++)
        {
            cin >> t[i];
        }
        for (long long int i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        vector<long long int> prefix(n);
        prefix[0] = p[0];
        for (long long int i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + p[i];
        }

        vector<long long int> freq_of_those_tea_which_can_not_stisfy_the_person(n + 1), remaining_tea_from_prefixvious_tea(n + 1);
        for (long long int i = 0; i < n; i++)
        {
            long long int temp = t[i];
            if (i > 0)
            {
                temp += prefix[i - 1];
            }
            long long int ind = upper_bound(prefix.begin(), prefix.end(), temp) - prefix.begin();
            freq_of_those_tea_which_can_not_stisfy_the_person[ind]++;
            long long int remaining = temp;
            if (ind > 0)
            {
                remaining -= prefix[ind - 1];
            }
            remaining_tea_from_prefixvious_tea[ind] += remaining;
        }

        for (long long int i = 1; i <= n; i++)
        {
            freq_of_those_tea_which_can_not_stisfy_the_person[i] += freq_of_those_tea_which_can_not_stisfy_the_person[i - 1];
        }

        for (long long int i = 0; i < n; i++)
        {
            cout << (i + 1 - freq_of_those_tea_which_can_not_stisfy_the_person[i]) * p[i] + remaining_tea_from_prefixvious_tea[i] << " ";
        }
        cout << endl;
    }
}