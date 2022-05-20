#include <bits/stdc++.h>
using namespace std;

int findFloor(long long int arr[], int n, long long int k)
{
    int mid, low = 0, high = n - 1, result = -1;
    while (low < high)
    {
        mid = (high - low) / 2;
        if (arr[mid] <= k)
        {
            result = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
}
// if (v[mid] <= x)
// {
//     result = mid;
//     low = mid + 1;
// }
// else
// {
//     high = mid - 1;
// }