for q in range(int(input())):
    p=int(input())
    arr=list(map(int,input().split()))
    fault=int(input())
    pages=[]
    i=0
    count=0
    while len(pages)<fault:
        if arr[i] in pages:
            pages.remove(arr[i])
            pages.append(arr[i])
            i+=1
        else:
            pages.append(arr[i])
            count+=1
            i+=1
    for k in range(i,len(arr)):
        if arr[k] in pages:
            pages.remove(arr[k])
            pages.append(arr[k])
        else:
            pages.remove(pages[0])
            pages.append(arr[k])
            count+=1
    print(count)

    

