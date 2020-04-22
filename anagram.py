def isalpha(s):
    if ord(s)<=ord('z') and ord(s)>=ord('a'):
        return True
    return False
a=input("Enter the first sentence")
b=input("Enter the second sentence")
a=a.lower()
b=b.lower()
words={}
for character in a:
    if isalpha(character):
        words[character]=words.get(character,0)+1
for character in b:
    if isalpha(character):
        words[character] = words.get(character, 0)-1
flag=True
for item in words.values():
    if item!=0:
        flag=False
        break
if flag:
    print("Yes")
else:
    print("No")
