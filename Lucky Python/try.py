# I have included most of the program in this function
def input_func():
    # The loop keeps on running until we get integer values as input
    while True:
        # Inside the try block we try to convert the string to number
        # If this doesnt happen it raises a valueerror exception
        # If no exceptions are raised then then break statement gets executed and we come out of the loop
        # Then we return a and b
        try:
            a = int(input("Enter the first number :"))
            b = int(input(("Enter the second number :")))
            break
        except ValueError:
            print("You havent Entered an Integer.Try again")
    return a, b

# We get the input values from the function
a, b = input_func()
print("The numbers are {} and {}".format(a, b))
