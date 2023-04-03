#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    long long beautifulSubnumsays(vector<int>& nums) {
        long long ans = 0;
        int n = nums.size();
        vector<int> v(n);
        unordered_map<int, int> mp;
        v[0] = nums[0];
        for (int i = 1; i < n; i++)
            v[i] = v[i - 1] ^ nums[i];
        for (int i = 0; i < n; i++) {
            int temp = 0 ^ v[i];
            ans = ans + ((long long)mp[temp]);
            if (v[i] == 0)
                ans++;
            mp[v[i]]++;
        }
        return ans;
    }
};