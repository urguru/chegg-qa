# This is for importing the turtle package into the program
from turtle import *

# We will declare three constants relating to different types of customers
NORMAL=0.1
PRIME=0.2
ELITE=0.3

# This is a function that prints the qunatity of items we purchased
def print_quantity(quantity):
    i=len(quantity)
    j=0;
    # We use one while loop here
    while j<i:
        print("{}. Qunatity={}".format(j+1,quantity[j]))
        j+=1

def calc_percentage(quantity,discount_value):
    total_price=0
    for qty in quantity:
        # Price of each item is 100
        total_price+=100*qty
    net_price=total_price-total_price*discount_value
    disc_percentage=(total_price-net_price)/total_price*100
    print("You have received a discount of {}%".format(disc_percentage))

# This part of the code creates the logo of our company
color('green', 'yellow')
begin_fill()
while True:
    forward(200)
    left(170)
    right(30)
    if abs(pos()) < 1:
        break
end_fill()
done()

# Now we take the input from the customer
cus_type=input("Enter the type of customer you are i.e. normal,prime,elite : ")
discount_value=0
# So here we use the type of the customer and set the discount that we will give them
# We have used the if else condition here
if cus_type=="normal":
    discount_value=NORMAL
elif cus_type=="prime":
    discount_value=PRIME
else:
    discount_value=ELITE

# We create a list holding the quantity of the each item
quantity=[0,0,0]
while True:
    item_no=int(input("These are the items at our store\n1.Apple\n2.Ball\n3.Cat\n4.Exit\nEnter the value of the item that you want to purchase"))
    if item_no==4:
        break
    item_qty=int(input("Enter the quantity"))
    quantity[item_no-1]=item_qty

total_items=0

# We iterate over a list and use a for loop
for item in quantity:
    total_items+=item

print_quantity(quantity)
print("The total number of items purchased is {}".format(total_items))
calc_percentage(quantity,discount_value)




