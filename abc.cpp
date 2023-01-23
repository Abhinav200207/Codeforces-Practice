#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isItPossible(string word1, string word2)
    {
        unordered_map<int, int> mp1, mp2;
        for (auto i : word1)
            mp1[i]++;
        for (auto i : word2)
            mp2[i]++;
        for (auto i : mp1)
        {
            for (auto j : mp2)
            {
                if (mp1.find(i.first) != mp1.end() && mp2.find(j.first) != mp2.end())
                {
                    mp1[i.first]--;
                    mp1[j.first]++;
                    if (mp1[i.first] == 0)
                    {
                        mp1.erase(i.first);
                    }

                    mp2[i.first]++;
                    mp2[j.first]--;
                    if (mp2[j.first] == 0)
                    {
                        mp2.erase(j.first);
                    }

                    if (mp1.size() == mp2.size())
                    {
                        return 1;
                    }

                    mp1[i.first]++;
                    mp1[j.first]--;
                    if (mp1[j.first] == 0)
                    {
                        mp1.erase(j.first);
                    }

                    mp2[i.first]--;
                    mp2[j.first]++;
                    if (mp2[i.first] == 0)
                    {
                        mp2.erase(i.first);
                    }
                }
            }
        }
        return 0;
    }
};