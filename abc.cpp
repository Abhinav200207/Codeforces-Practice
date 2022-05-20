#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string S, int n)
{
    // cout << "aya tha yahan" << endl;
    if (n == 1)
    {
        return false;
    }
    for (int i = 0; i < n / 2; i++)
    {
        if (S[i] != S[n - i - 1])
        {
            return false;
        }
    }
    return true;
}

void printSubstrings(string str, int n)
{
    for (int i = 0; i < n; i++)
    {
        string subStr = "";
        for (int j = i; j < n; j++)
        {
            subStr += str[j];
            // cout << subStr << endl;
            if (isPalindrome(subStr, subStr.length()))
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        printSubstrings(s, n);
    }
}