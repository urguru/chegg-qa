# Input weight and height as float
weight = float(input("Enter your weight in pounds :"))
height = float(input("Enter your height in inches :"))
# Calculate the BMI using the formula
bmi = (weight*703)/(height*height)
result = ''
# Assign the correct comment for the result
if bmi < 18.5:
    result = "Under Weight"
elif bmi <= 25:
    result = "Optimal"
else:
    result = "OverWeight"
# Print the output
print("Your BMI is {} and your weight is {}".format(bmi, result))
