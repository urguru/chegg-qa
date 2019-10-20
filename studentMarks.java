import java.util.Scanner;
public class studentMarks{
    public static void main(String args[]){
        // Create an array of string variables for storing the 10 students name
        String students[]=new String[10];
        // Create an array of integer variables to store the marks of the students
        int marks[]=new int[10];
        // Create a new scanner object
        Scanner in=new Scanner(System.in);
        // Input the 10 names
        System.out.println("Enter the names of the 10 students");
        for(int i=0;i<10;++i){
            students[i]=in.nextLine();
        }
        // Input the 10 marks
        System.out.println("Enter the marks of the 10 students");
        for(int i=0;i<10;++i){
            marks[i]=in.nextInt();
        }
        // Output the names and marks of the 10 students together
        System.out.println("The list of the 10 students and thier marks is as follows");
        for(int i=0;i<10;++i){
            System.out.println(students[i]+ ' '+ marks[i]);
        }
    }
}