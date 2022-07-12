for _ in range(int(input())):
    n = input()
    s = '1' + '0'*(len(n)-1)
    print(int(n) - int(s))
