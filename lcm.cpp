#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int index1, index2, lowest;
        int n;
        cin >> n;
        lowest = INT_MIN;
        vector<int> v1(n);
        vector<int> v2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
            if (v1[i] > lowest)
            {
                lowest = v1[i];
                index1 = i;
            }
        }
        lowest = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> v2[i];
            if (v2[i] > lowest)
            {
                lowest = v2[i];
                index2 = i;
            }
        }
        int max1 = *max_element(v1.begin(), v1.end());
        int max2 = *max_element(v2.begin(), v2.end());

        if (max1 > max2)
        {
            for (int i = 0; i < n; i++)
            {
                if (v1[i] < v2[i])
                {
                    int m = v1[i];
                    v1[i] = v2[i];
                    v2[i] = m;
                }
            }
            cout << ((*max_element(v1.begin(), v1.end())) * (*max_element(v2.begin(), v2.end()))) << endl;
        }
        else if (max1 < max2)
        {
            for (int i = 0; i < n; i++)
            {
                if (v1[i] > v2[i])
                {
                    int m = v1[i];
                    v1[i] = v2[i];
                    v2[i] = m;
                }
            }
            cout << ((*max_element(v1.begin(), v1.end())) * (*max_element(v2.begin(), v2.end()))) << endl;
        }
        if (max1 == max2)
        {
            if (index1 == index2)
            {
                cout << max1 * max2 << endl;
            }
            if (index1 != index2)
            {
                for (int i = 0; i < n; i++)
                {
                    if (v1[i] < v2[i])
                    {
                        int m = v1[i];
                        v1[i] = v2[i];
                        v2[i] = m;
                    }
                }
                cout << ((*max_element(v1.begin(), v1.end())) * (*max_element(v2.begin(), v2.end()))) << endl;
            }
        }
    }
}