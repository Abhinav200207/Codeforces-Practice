# #include <bits/stdc++.h>
# using namespace std;

# int main()
# {
#     long long int t;
#     cin >> t;
#     while (t--)
#     {
#         long long int n, z;
#         cin >> n >> z;
#         vector<long long int> v(n + 1);
#         for (long long int i = 1; i <= n; i++)
#         {
#             cin >> v[i];
#         }
#         sort(v.begin(), v.end());
#         for (long long int i = 1; i <= n; i++)
#         {
#             long long int a = v[i];
#             v[i] = v[i] | z;
#             z = z & a;
#         }
#         cout << v[n] << endl;
#     }
# }