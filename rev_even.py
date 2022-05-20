def numeven(n):
    n =  str(n)
    count = 0
    for i in range(len(n)):
        if (int(n[i])%2==0):
            count+=1
    return count

# print(numeven(387))

for _ in range(int(input())):
    n = int(input())
    if (n % 2 == 0):
        print("0")
        continue
    if int(str(n)[::-1]) % 2 == 0:
        print("1")
        continue
    if (numeven(n) == 0):
        print("-1")
        continue
    else:
        print("2")
