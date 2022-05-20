#include <bits/stdc++.h>
using namespace std;
// [-2,1,-3,4,-1,2,1,-5,4]

void sumarray(vector<int> v, int n)
{
    int sum = 0;
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        maxsum = max(maxsum, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << endl << maxsum << endl;
}

int main()
{
    sumarray({1, -2, 3, 2, -6, 4, 100, -200}, 8);
}