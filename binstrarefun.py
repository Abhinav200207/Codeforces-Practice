mod = 998244353

for _ in range(int(input())):
    n = int(input())
    s = 'a' + input()

    cnt0,cnt1 = 0,0
    ans = 0
    # prevempty = 0
    kitna0harapliyahain,kitna1harapliyahain = 0,0

    for i in range(1,n+1):
        if (s[i] == '0'):
            cnt0 += 1
            req = i
            kitna0kikamihai = req - cnt0 - kitna0harapliyahain # mujhe itna cells ko hrapna kijarurat hai
            emptycells = i - 1 - kitna0harapliyahain - kitna1harapliyahain
            emptycells -= kitna0kikamihai
            kitna0harapliyahain += kitna0kikamihai
            
            ans = (ans + pow(2,emptycells,mod))%mod
        else:
            cnt1 += 1
            req = i
            kitna1kikamihai = req - cnt1 - kitna1harapliyahain # mujhe itna cells ko hrapna kijarurat hai
            emptycells = i - 1 - kitna0harapliyahain - kitna1harapliyahain
            emptycells -= kitna1kikamihai
            kitna1harapliyahain += kitna1kikamihai
            ans = (ans + pow(2,emptycells,mod))%mod
    print(int(ans))