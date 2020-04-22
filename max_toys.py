for q in range(int(input())):
    n,p=map(int,input().split())
    arr=list(map(int,input().split()))
    arr.sort()
    c=0;
    while p>0:
        p=p-arr[c]
        c+=1
    print(c)