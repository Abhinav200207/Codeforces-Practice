for _ in range(int(input())):
    n = int(input())
    s = str(input())
    d = {1:"a",2:"b",3:"c",4:"d",5:"e",6:"f",7:"g",8:"h",9:"i",10:"j",11:"k",12:"l",13:"m",14:"n",15:"o",16:"p",17:"q",18:"r",19:"s",20:"t",21:"u",22:"v",23:"w",24:"x",25:"y",26:"z"}
    ans = ""
    i = 0
    while(i < n):
        # print(i)
        if (i + 2 < n and s[i + 2] == "0" and ((i + 3 < n and s[i + 3] != "0") or (i + 2 == n - 1))):
            ans += d[int(s[i] + s[i + 1])]
            i += 3
        else:
            ans += d[int(s[i])]
            i += 1
    print(ans)