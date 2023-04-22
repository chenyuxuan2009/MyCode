n=int(input())
ans=0
for i in range(1,n+1):
    tmp=1
    for j in range(i):
        tmp*=(j+1)
    ans+=tmp
print(ans)