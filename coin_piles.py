for q in range(int(input())):
    n,k=map(int,input().split())
    arr=list(map(int,input().split()))
    arr.sort()
    piles_removed=0
    ans=1000000
    for i in range(len(arr)):
        temp=piles_removed
        piles_removed+=arr[i]
        for j in range(n-1,i,-1):
            if arr[j]-arr[i]>k:
                temp+=arr[j]-arr[i]-k
        ans=min(temp,ans)
    print(ans)