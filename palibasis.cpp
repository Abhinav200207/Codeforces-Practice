#include <bits/stdc++.h>
using namespace std;

int coinChange(vector<int> v, int n)
{
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    for (auto i : v)
    {
        for (int j = i; j < dp.size(); j++)
        {
            dp[i] += dp[j - i];
        }
    }
    return dp[n];
}

int palindrome(int num)
{
    int rev = 0, val;
    val = num;
    while (num > 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    if (val == rev)
        return 1;
    else
        return 0;
}

int main()
{
    int t;
    cin >> t;
    vector<int> v;
    for (int i = 1; i <= 40000; i++)
    {
        if (palindrome(i))
        {
            v.push_back(i);
        }
    }
    // cout << endl << v.size() << endl;
    while (t--)
    {
        int n;
        cin >> n;
    }
}