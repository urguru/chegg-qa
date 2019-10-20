# Here i'm taking the input from the user.
# Since the temperature can be in float i'm making it float value
temperature=float(input("Enter the temperature\n"))
# Initially i have assingned the fever to be false
fever=False
# So if the temperature is greater than 98.6 we make fever=true
if temperature>98.6:
    fever=True

print(fever)