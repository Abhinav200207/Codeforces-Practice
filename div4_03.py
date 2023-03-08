for _ in range(int(input())):
    n = int(input())
    s = input()

    st1 = dict()
    st2 = dict()

    st1[s[0]] = 1
    
    for i in range(1,n):
        if (s[i] in st2):
            st2[s[i]] += 1
        else:
            st2[s[i]] = 1

    ans = len(st1) + len(st2)

    for i in range(1,n - 1):
        if (s[i] in st1):
            st1[s[i]] += 1
        else:
            st1[s[i]] = 1

        st2[s[i]] -= 1
        if (st2[s[i]] == 0):
            del st1[s[i]]

        ans = max(ans,len(st2) + len(st1))
    
    print(ans)