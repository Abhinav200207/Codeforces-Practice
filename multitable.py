n = int(input())
l = []
l.append([0 for i in range(n + 1)])
for i in range(n):
    l.append([0]+list(map(int, input().split())))

ans = []
for i in range(2,n):
    ans.append(int(((l[i][i+1]*l[i-1][i])/l[i-1][i+1])**(0.5)))
ans = [int(((l[1][2]*l[1][3])/l[2][3])**(0.5))] + ans + [int(((l[n][1]*l[n][2])/l[1][2])**(0.5))]
print(*ans)