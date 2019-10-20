/**
 * This program takes input size from the user and then stores the number in an array
 * The program continues as long as the user wants to store and display numbers
 * On giving 0 as the size the program terminates
 * If the user gives a negative value as the size then the program asks the user to enter a positive number
 */
import java.util.Scanner;

public class FillArray {
    public static void main(String args[]) {
        //We initialise the size to be -1 initially.You  can give any value that you please
        int size = -1;
        //The exit conditions are stated inside the while loop itself
        while (true) {
            //Creating a scanner object to read from the console
            Scanner scanner = new Scanner(System.in);
            System.out.print("\nPlease enter the number of digits to be stored :");
            size = scanner.nextInt();
            //If the size is less than zero then we ask the user to renter the size
            //We use continue here to re rerun the loop
            if (size < 0) {
                System.out.println("ERROR! You must enter a non-negative number\n");
                continue;
            } 
            //If the size is zero then we use break and come out of the loop
            else if (size == 0) {
                System.out.println("No digits to store? Goodbye!");
                break;
            }
            //We declare an array of the size 'Size as mentioned by the user'
            int[] arr = new int[size];
            //Then we take the input
            for (int i = 0; i < size; ++i) {
                System.out.print("Enter integer " + i + ":");
                arr[i] = scanner.nextInt();
            }
            // Then we print the values
            System.out.println("\nThe contents of your array:");
            System.out.println("Number of digits in array: " + size);
            System.out.print("Digits in array: ");
            for (int i = 0; i < size; ++i) {
                System.out.print(arr[i] + " ");
            }
            //The below statement is for indentation
            System.out.println();
        }
    }
}