def decode(s):
    if not s or s[0]=='0':
        return 0
    n=len(s)
    dp=[0]*(n+1)
    dp[0]=1 
    dp[1]=1 

    for i in range(2,n+1):
        if s[i-1]!='0':
            dp[i]+=dp[i-1]
        a=int(s[i-2:i])
        if a>=10 and a<=26:
            dp[i]+=dp[i-2]
    return dp[n]

s=input().strip()
print(decode(s))