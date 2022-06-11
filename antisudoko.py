for _ in range(int(input())):
    l = []
    for i in range(9):
        l.append(input())
    for i in range(9):
        for j in range(9):
            if i == 0 and j == 0:
                if (int(l[i][j]) == 9):
                    print(1,end = "")
                else:
                    print(int(l[i][j]) + 1,end = "")
                continue
            if i == 1 and j == 3:
                if (int(l[i][j]) == 9):
                    print(1,end = "")
                else:
                    print(int(l[i][j]) + 1,end = "")
                continue
            if i == 2 and j == 6:
                if (int(l[i][j]) == 9):
                    print(1,end = "")
                else:
                    print(int(l[i][j]) + 1,end = "")
                continue
            if i == 4 and j == 1:
                if (int(l[i][j]) == 9):
                    print(1,end = "")
                else:
                    print(int(l[i][j]) + 1,end = "")
                continue
            if i == 3 and j == 4:
                if (int(l[i][j]) == 9):
                    print(1,end = "")
                else:
                    print(int(l[i][j]) + 1,end = "")
                continue
            if i == 5 and j == 7:
                if (int(l[i][j]) == 9):
                    print(1,end = "")
                else:
                    print(int(l[i][j]) + 1,end = "")
                continue
            if i == 6 and j == 2:
                if (int(l[i][j]) == 9):
                    print(1,end = "")
                else:
                    print(int(l[i][j]) + 1,end = "")
                continue
            if i == 7 and j == 5:
                if (int(l[i][j]) == 9):
                    print(1,end = "")
                else:
                    print(int(l[i][j]) + 1,end = "")
                continue
            if i == 8 and j == 8:
                if (int(l[i][j]) == 9):
                    print(1,end = "")
                else:
                    print(int(l[i][j]) + 1,end = "")
                continue
            print(l[i][j],end = "")
        print()
