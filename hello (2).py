import sys
fin = open('money.txt', "r")
sys.stdout = open('count.txt', "w+")
data = fin.readlines()
money = 0
i=1
for item in data:
    item.strip('\n')
    print("{}. {}".format(i, item.strip('\n')), end=" ")
    inner = item.split()
    if inner[-1]:
        money += int(inner[-1])
    print(money)
    i+=1
