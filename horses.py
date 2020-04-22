# This function takes two inputs i.e. the weight of the horse and the type of the horse
# Then it returns the amount of food that needs to be fed to the horse
def food_needed(weight,type):
    if type== "growing" or type== "lactating" or type== "heavy work":
        return weight*0.03
    elif type =="maintenance" or type=="light work":
        return weight*0.02
    # If none of the above two cases get executed then it means that the horse is doing moderate work and its 2.5 percent of food needed
    else:
        return weight*0.025

# The line variable is for reading every line
line=" "
# This array stores all the weights of the horses
horse_weight=[]
# This array stores the type of the horses
horse_type=[]
while True:
    line=input()
    # The input loop breaks if there is an empty line
    if len(line)==0:
        break
    arr=line.split()
    # The first item when we split the input line is the weight of the horse
    horse_weight.append(int(arr[0]))
    # Then we find the first space and the words after that mention the type of the horse
    index=line.find(" ")
    horse_type.append(line[index+1:])
# For all the inputs in the array we print the amount of food needed
for i in range(len(horse_type)):
    print("{} {}".format(i+1,food_needed(horse_weight[i],horse_type[i])))


