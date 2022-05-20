#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    if (*max_element(v.begin() + 1, v.end() - 1) == 1 || (n == 3 && v[1] % 2 == 1))
    {
        cout << "-1\n";
        return;
    }

    long long answer = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (v[i] % 2 == 0)
        {
            answer += v[i] / 2;
        }
        else
        {
            answer += (v[i] / 2) + 1;
        }
    }
    cout << answer << '\n';
}

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int tests;
    cin >> tests;
    while (tests--)
        solve();
}