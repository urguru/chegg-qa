# date takes the input as a string
date=input("Enter your birthday as MMDDYY :")
# We print the output using .format option
# The date is from index 0 to 1 so date[0:2]
# The month is from index 2 to 3 so date[2:4]
# The year index is from index 4 till end so date[4:]
print("{}/{}/{}".format(date[0:2],date[2:4],date[4:]))