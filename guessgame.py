from math import log
small = int(input("Enter the smaller number :"))
large = int(input("Enter the larger number :"))
limit = int(log(large-small, 2))
found = False
for i in range(limit):
    print(small, large, sep=" ")
    num = int((small+large)/2)
    print("Your number is", num)
    choice = input("Enter =, <, or >: <")
    if choice == '<':
        large = num-1
    elif choice == '>':
        small = num+1
    else:
        found = True
        print("Hooray, I've got it in {} tries!".format(i+1))
        break
if not found:
    print("Fuck you !!!You cheated on me")
