n = int(input())
arr = [0]+list(map(int, input().split()))

l = 1
r = n
print(arr)
ans = ""
cnt = 0
lst = 0
while(l <= r):
    temp = []
    if (arr[r] > lst):
        temp.append(arr[r])
    if (arr[l] > lst):
        temp.append(arr[l])
    temp.sort()
    if (len(temp) == 2):
        temp.remove(temp[1])
    if (len(temp) == 1):
        if (temp[0] == arr[r]):
            r -= 1
            ans += "R"
            lst = arr[r]
        else:
            l += 1
            ans += "L"
            lst = arr[l]

    else:
        break
print(len(ans))
print(ans)