 Since Python has a very easy syntax I have used Python to implement and tell you about the algorithm
 We set the exit flag status to zero and all other necessary variables to zero
 Now as long as exit_staus==False Repeat the loop
   Take input from the user whether the student is a normal student,honors student or exit
   if input==exit
       set exit_status=True
   else if input is honors or normal student do the following
       if student_type==Normal
           print name and normal grade
       else
           increment the bonus count
           grade=grade*1.05
           print that the student gets a bonus and the new grade
       increment the student 
       add the grade of the student to total grade
   else
       print that the user has given a wrong input...
       go to the start of the loop again
 end of the while loop
 Now calculate the average and display all other parameters
 If the number of students is zero then display zero students
exit_status = False
total_number_of_students = 0
bonus_count = 0
total_grade = 0.0
c_type = 0
while not exit_status:
    c_type = int(input("Enter 1 if the student is in normal class\nEnter 2 if the student is in honors class\nEnter 3 if you want to exit\n"))
    if c_type == 3:
        exit_status = True
    else if c_type==1 or c_type==2:
        total_number_of_students += 1
        name = input("Enter the name of the student :")
        grade = float(input("Enter the grade :"))
        if c_type == 1:
            print("{} wont get a bonus 5% increase in grade so the grade remains {}".format(
                name, grade))
        else:
            grade = grade*1.05
            bonus_count += 1
            print("{} will get a 5% bonus increase in grade and the new grade is {}".format(
                name, grade))
        total_grade += grade
    else:
        print("Wrong Choice.Try Again")
        continue
if total_number_of_students>0:
    print("The total number of students is {}".format(total_number_of_students))
    print("The total number of students eligible for bonus is {}".format(bonus_count))
    print("The average grade of the whole class is {}".format(total_grade/total_number_of_students))
else:
    print("Zero Number of Students data entered")
