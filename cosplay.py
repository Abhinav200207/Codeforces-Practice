t = int(input())
for _ in range(t):
    n = input()
    s = input()
    ans = 0
    cnt = 2
    for c in s:
        if c == '1': cnt += 1
        else:
            ans += max(2 - cnt, 0)
            cnt = 0
    print(ans)