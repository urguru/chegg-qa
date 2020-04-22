a = input("Enter a number")
b=int(input("Enter the base"))
a = a[::-1]
res = 0
i = 0
for character in a:
    if character >='1' and character<='9':
        res += (ord(character)-ord('0'))*b**i
    if character >= 'A' and character <= 'F':
        res += (ord(character)-ord('A')+10)*b**i
    i += 1

print(res)
