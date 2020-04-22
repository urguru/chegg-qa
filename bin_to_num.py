a=input("Enter a number")
a=a[::-1]
res=0
i=0
for character in a:
    if character=='1':
        res+=2**i
    i+=1
print(res)
