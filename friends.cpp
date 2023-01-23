#include <bits/stdc++.h>

using namespace std;

struct Trie
{
    struct Trie *child[2] = {0};
};
typedef struct Trie trie;

void insert(trie *dic, int x)
{
    trie *temp = dic;
    for (int i = 30; i >= 0; i--)
    {
        int curr = x >> i & 1;
        if (temp->child[curr])
            temp = temp->child[curr];
        else
        {
            temp->child[curr] = new trie;
            temp = temp->child[curr];
        }
    }
}

int find_greatest(trie *dic, int x)
{
    int res = 0;
    trie *temp = dic;
    for (int i = 30; i >= 0; i--)
    {
        int curr = x >> i & 1;
        if (temp->child[curr ^ 1])
        {
            res ^= 1 << i;
            temp = temp->child[curr ^ 1];
        }
        else
        {
            temp = temp->child[curr];
        }
    }
    return res;
}

int main()
{
    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
        int n;
        cin >> n;
        int a[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        trie *t[n + 2];
        int prexor[n + 1];
        prexor[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            t[i] = new trie;
            insert(t[i], prexor[i - 1]);
            prexor[i] = prexor[i - 1] ^ a[i];
        }
        t[n + 1] = new trie;
        insert(t[n + 1], prexor[n]);

        pair<int, int> asc[n + 1];
        for (int i = 1; i <= n; i++)
        {
            asc[i] = make_pair(a[i], i);
        }
        sort(asc + 1, asc + n + 1);

        int left[n + 1], right[n + 1];
        stack<int> s;
        for (int i = 1; i <= n; i++)
        {
            while (!s.empty() && a[i] >= a[s.top()])
                s.pop();
            if (s.empty())
                left[i] = 0;
            else
                left[i] = s.top();
            s.push(i);
        }
        while (!s.empty())
            s.pop();
        for (int i = n; i > 0; i--)
        {
            while (!s.empty() && a[i] > a[s.top()])
                s.pop();
            if (s.empty())
                right[i] = n + 1;
            else
                right[i] = s.top();
            s.push(i);
        }

        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            int x = asc[i].second;
            int r = right[x] - 1;
            int l = left[x] + 1;
            if (x - l < r - x)
            {
                for (int j = l - 1; j < x; j++)
                {
                    ans = max(ans, find_greatest(t[x + 1], prexor[j] ^ a[x]));
                }
                t[l] = t[x + 1];
                for (int j = l - 1; j < x; j++)
                {
                    insert(t[l], prexor[j]);
                }
            }
            else
            {
                for (int j = x; j <= r; j++)
                {
                    ans = max(ans, find_greatest(t[l], prexor[j] ^ a[x]));
                }
                for (int j = x; j <= r; j++)
                {
                    insert(t[l], prexor[j]);
                }
            }
        }
        cout << ans << endl;
    }
}