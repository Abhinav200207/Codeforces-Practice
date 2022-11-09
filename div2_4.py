for _ in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))
    mini = min(l[1:])
    if (mini >= l[0]):
        print("Bob")
    else:
        print("Alice")