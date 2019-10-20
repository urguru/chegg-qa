// Armstrong number is a number which is equal to the sum of the cubes of its digits
//153 is an armstrong number 153=1^3+5^3+3^3
public class armstrong {
    public static void main(String args[]) {
        int digit = 0;
        int armstrong_number = 0;
        // Loop through 1 to 100000
        for (int i = 1; i <= 100000; ++i) 
        {
            armstrong_number=0;
            //Equate the number to a temporary variable
            int temp = i;
            //As long as the number is greater than zero add to the armstrong_number
            while (temp > 0) 
            {
                // Get the digit by finding the remainder
                digit = temp % 10;
                //Add the cube of the digit
                armstrong_number += Math.pow(digit, 3);
                temp /= 10;
            }
            // If the armstrong number value is equal to i then print the value
            if (i == armstrong_number) {
                System.out.println(armstrong_number);
            }

        }
    }
}