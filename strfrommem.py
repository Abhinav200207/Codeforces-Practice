from math import ceil


for _ in range(int(input())):
    s = input()
    cnt = 0
    st = set()
    for i in range(len(s)):
        st.add(s[i])
        if (len(st) > 3):
            cnt += 1
            st = set()
            st.add(s[i])
    if (len(st) != 0):
        cnt += 1
    print(cnt)