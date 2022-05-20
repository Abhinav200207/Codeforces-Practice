#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    vector<int> v{0, 1, 2, 3, 4};
    vector<int> vcount;
    for (int j = 1; j <= n; j++)
    {
        int count = 0;
        int sum = v[j];
        // cout << sum << endl;
        for (int i = j + 1; i <= n; i++)
        {
            sum += v[i];
            cout << i << j << i - j - 1 << endl;
            if (2 * sum != (v[j] + v[i]) * i)
            {
                v[i] = (2 * sum - v[j] * i + v[i] * j - v[i]) / (i - j - 1);
                count++;
            }
        }
        vcount.push_back(count);
    }
    cout << *max_element(vcount.begin(), vcount.end()) << endl;
}

// 5
// 4
// 1 2 3 4
// 4
// 1 1 2 2
// 2
// 0 -1
// 6
// 3 -2 4 -1 -4 0
// 1
// -100
