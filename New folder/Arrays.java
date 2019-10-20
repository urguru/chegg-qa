// java.util contains the Random class and the Scanner class
import java.util.*;
//The name of the class that contains the main is Arrays.The name of the file also must be same
class Arrays {
    //The function for binary search
    public static void binarySearch(int arr[], int first, int last, int num) {
        int mid = (first + last) / 2;
        while (first <= last) {
            if (arr[mid] < num) {
                first = mid + 1;
            } else if (arr[mid] == num) {
                System.out.print("The key " + num + " found in index " + (mid + 1));
                break;
            } else {
                last = mid - 1;
            }
            mid = (first + last) / 2;
        }
        if (first > last) {
            System.out.print("The key " + num + " does not exist");
        }
    }
    //The function for sorting.Its a basic selection sort
    public static void sort(int arr[]) {
        for (int i = 0; i < arr.length; ++i) {
            for (int j = i; j < arr.length; ++j) {
                if (arr[i] > arr[j]) {
                    //Swapping of the variables
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }

    //The main function
    public static void main(String args[]) {
        //Declaring an array of size 15
        int arr[] = new int[15];
        //Creating an object of class Random
        Random t = new Random();
        System.out.println("The array of random elements is:");
        for (int i = 0; i < 15; ++i) {
            //the nextInt function belongs to Random class.This generates random number between 0-100 exculsive of 100.So I have added 1 to it
            //So now we can get numbers from 1-100(Inclusive of both)
            arr[i] =1 + t.nextInt(100);
            System.out.print(arr[i] + "  ");
        }
        sort(arr);
        int num;
        System.out.println("\nThe sorted array is:");
        for (int i = 0; i < 15; ++i) {
            System.out.print(arr[i] + "  ");
        }
        do {
            System.out.println("\nEnter a search key or -1 to exit");
            //We are creating an object of type scanner to read from the console
            Scanner in = new Scanner(System.in);
            num = in.nextInt();
            if (num != -1) {
                //Calling the binary search function
                binarySearch(arr, 0, arr.length, num);
            }
        } while (num != -1);
    }
}
