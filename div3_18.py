for _ in range(int(input())):
    s = input()
    if (len(s) == 1):
        if ((s == 's' or s == 'e' or s == 'Y')):
            print('YES')
        else:
            print('NO')
    elif (len(s) == 2):
        if (s == 'es' or s == 'Ye' or s == 'sY'):
            print('YES')
        else:
            print('NO')
    else:
        temp = "Yes"*60
        if (s in temp):
            print('YES')
        else:
            print('NO')