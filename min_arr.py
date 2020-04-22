#code
for _ in range(int(input())):
    k = int(input())
    n = int(input())
    arr = list(map(int, input().split()))
    arr.sort()
    diff = arr[n-1]-arr[0]-2*k
    print(diff)
