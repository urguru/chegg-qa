# We have used stacks in this program to push and pop the candies and then display them
# We first open the file and read al the colors
file=open('candy.txt',"r")
data=file.read()
data=data.split()
# We declare three lists which we will use them as stacks
# The stack is for the data beofore removing the colors
stack=[]
# The final stack contains the candies present in the container without the two favourite colors
final_stack=[]
# The colors on the table
color_stack=[]

print("Items before removal in the container\n")
for color in data:
    print(color)

# Add all the colors to the stack
for color in data:
    stack.append(color)

# Pop all the colors from the stack and add them to the color_stack if it is blue or yellow or else add it to the final_stack
while len(stack)!=0:
    color=stack.pop()
    if color=="blue" or color=="yellow":
        color_stack.append(color)
    else:
        final_stack.append(color)

# Now pop the elements and then print it on the console..
# You will get the same sequence
print("After Removal\n\nItems on the table\n\n")

while len(color_stack):
    color=color_stack.pop()
    print(color)

print("Items in the Container")
while len(final_stack):
    color=final_stack.pop()
    print(color)


