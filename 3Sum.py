def solve(ans):
    for i in range(len(ans)):
        for j in range(i + 1,len(ans)):
            for k in range(j + 1,len(ans)):
                if ((ans[i] + ans[j] + ans[k])%10 == 3):
                    return "YES"
    return "NO"

for _ in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))
    ans = []
    for i in l:
        if (ans.count(i%10) < 3):
            ans.append(int(i%10))
    print(solve(ans))