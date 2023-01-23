#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int steps = 0;
        while (steps * (steps + 1) < 2 * n)
            steps++;
        if (steps * (steps + 1) == 2 * (n + 1))
            steps++;
        cout << steps << endl;
    }
}