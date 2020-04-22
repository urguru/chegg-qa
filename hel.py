def maxLen(n, arr):
    #Code here
    s = {}
    a=[]
    sum = 0
    for i in range(n):
        sum += arr[i]
        if s.get(sum, None):
            a.append(i-s[sum])
        else:
            s[sum] = i
    return max(a)
if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        print(maxLen(n, arr))
    # Contributed by: Harshit Sidhwa
''' This is a function problem.You only need to complete the function given below '''
#Your task is to complete this function
#Your should return the required output



