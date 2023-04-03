#include <bits/stdc++.h>
using namespace std;

class Solution
{
    long long my_counter = 0;
    void merge(long long a[], long long l, long long mid, long long r)
    {
        long long l1 = mid - l + 1;
        long long a1[l1];
        long long l2 = r - mid;
        long long a2[l2];

        for (long long i = 0; i < l1; i++)
        {
            a1[i] = a[l + i];
        }

        for (long long i = 0; i < l2; i++)
        {
            a2[i] = a[mid + 1 + i];
        }

        long long left = 0, right = 0, k = l;
        while (left < l1 && right < l2)
        {
            if (a1[left] < a2[right])
            {
                a[k++] = a1[left++];
            }
            else
            {
                a[k++] = a2[right++];
                my_counter += (l1 - left);
            }
        }

        while (left < l1)
        {
            a[k++] = a1[left++];
        }

        while (right < l2)
        {
            a[k++] = a2[right++];
        }

        return;
    }

    void mergeSort(long long a[], long long l, long long r)
    {
        if (l < r)
        {
            int mid = (r + l) / 2;
            mergeSort(a, l, mid);
            mergeSort(a, mid + 1, r);
            merge(a, l, mid, r);
        }
    }

public:
    long long int inversionCount(long long arr[], long long N)
    {
        mergeSort(arr, 0, N - 1);
        long long int res = my_counter;
        my_counter = 0;
        return res;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long v[n];
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution obj;
        cout << obj.inversionCount(v,n) << endl;
    }
}