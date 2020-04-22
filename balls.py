for _ in range(int(input())):
    m,n=map(int,input().split())
    a1=list(map(int,input().split()))
    a2=list(map(int,input().split()))
    res1=0
    res2=0
    res=0
    i=0
    j=0
    while i<m and j<n:
            if a1[i]==a2[j]:
                res1+=a1[i]
                res2+=a2[j]
                res+=max(res1,res2)
                i+=1
                j+=1
                res1=0
                res2=0
            elif a1[i]<a2[j]:
                res1=res1+a1[i]
                i+=1
            else:
                res2=res2+a2[j]
                j+=1
    while i<m:
        res1+=a1[i]
        i+=1
    while j<n:
        res2+=a2[j]
        j+=1
    res+=max(res1,res2)
    print(res)
