#include <bits/stdc++.h>
using namespace std;

void operation(vector<int> v1,vector<int> v2)
{
    int val = 0;
    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = i + 1; j < v1.size(); j++)
        {
            val += ((v1[i] + v1[j])*(v1[i] + v1[j]) + (v2[i] + v2[j])*(v2[i] + v2[j]));
        }
    }
    cout << val << endl;
}

int main()
{
    operation({3, 6, 6, 6},{2, 7, 4, 1});
}