from math import floor,ceil
height = int(input("Enter the height: "))
width = int(input("Enter the width: "))
top_width = width
top_height = ceil(height/5)
bottom_height =floor(height-height/5)
bottom_width = int(width/4)
# This prints the top three rows with full all T's
for row in range(top_height):
    for column in range(top_width):
        print("T", end="")
    print()
# This prints the next 6 rows
for row in range(bottom_height):
    # First we print spaces
    # We divide the remaining characters without T and divide it by 2 and print those many spaces
    for column in range(int((top_width-bottom_width)/2)):
        print(" ", end="")
    # Then we print T's
    for column in range(bottom_width):
        print("T", end="")
    # Again Spaces
    for column in range(int((top_width-bottom_width)/2)):
        print(" ", end="")
    # Then end of line
    print()
