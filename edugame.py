# def solve(l1,l2):
#     ans = 0
#     M = {}
#     for i in range(len(l1)):
#         if l1[i] in M:
#             M[l1[i]] += 1
#         else:
#             M[l1[i]] = 1

    
#     for i in range(len(l2)):
#         if l2[i] in M:
#             M[l2[i]] += 1
#         else:
#             M[l2[i]] = 1

#     for i in M:
#         if M[i] < 2:
#             ans += 1

#     print(ans)

# n = int(input())
# l1 = []
# l2 = []
# while (n-1):
#     input_string = input()
#     l = input_string.split()
#     l1.append(l[0])
#     l2.append(l[1])
#     n -= 1
# solve(l1,l2)



# # void solve(int n, vector<int> v)
# # {
# #     // for (int i = 1; i < n + 1; i++)
# #     // {
# #     //     cout << v[i] << endl;
# #     // }
# #     // int count = 0;
# #     // for (int i = 1; i < n + 1; i++)
# #     // {
# #     //     cout << "i:" << i << " " << endl;
# #     //     for (int j = i + 1; j < n + 1; j++)
# #     //     {
# #     //         if (v[i] * v[j] == i + j)
# #     //         {
# #     //             cout << "hello" << endl;
# #     //             count++;
# #     //         }
# #     //     }
# #     // }
# #     // cout << count << endl;
# # }