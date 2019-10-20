// Hangman.java
package static_approach;

import java.awt.List;
import java.util.LinkedList;
import java.util.Random;
import java.util.Scanner;

public class Hangman {

    Scanner gameInput = new Scanner(System.in);
    Random rand = new Random();

    // The following routine will determine if the character c
    // is inside the String str. A true is returned if it is inside.
    // It is very useful to call the isIn routine inside of printCurrStatus ...
    // See the comments in the Hint for printCurrStatus.
   boolean isIn(char c, String str)
   {
       for (int i=0; i<str.length;++i)
           if (str.substring(i, i+1).equals("c"));
            return true;

   }
    // ****** printCurrStatus
    // If userInputs contains "ard" and strToGuess contains "aardvark" then
    // the following routine prints out an output that looks something like:
    // Current Status for userInpts=ard
    // a a r d _ a r _

    // This routine returns true if all letters were guessed, otherwise false is
    // returned.
    // HINT: It is useful to have a for loop that goes through each of the
    // characters in
    // strToGuess. Call isIn for each character (note the second parameter would
    // be userInputs). If isIn returns true, just print out the character, if isIn
    // returns false, then print out '_'.
    // Additionally, you can have a variable like:

    // boolean success = true;
    // Whenever you output at least one '_', you can set success = false.
    // Your code can just return the variable "success" and it will return true if
    // the user has picked all of the letters.

    boolean printCurrStatus(String strToGuess, String userInputs) {
        // Iterate through all letters in word

        int i, p = 0;
        char letter;
        char strLetter;
        letter = '-';
        char[] carray = new char[10];

        for (i = 0; i < strToGuess.length(); i++) {

            carray[i] = '-';
            System.out.print(carray[i]);

        }
        do {

            System.out.println("");
            System.out.println("Current Status for userInputs= " + userInputs);
            System.out.println("Enter next letter:");

            Scanner gameOp = new Scanner(System.in);
            String strCh = gameOp.nextLine();
            strCh = strCh.trim();
            userInputs += strCh;

            // Check if letter already have been entered by user before

            for (i = 0; i < strToGuess.length(); i++) {

                if (strCh.length() != 0)
                    letter = strCh.charAt(0);
                strLetter = strToGuess.charAt(i);

                if (isIn(letter, strToGuess))
                    if (letter == strLetter) {
                        carray[i] = letter;
                        p += 1;
                    }

            }
            for (i = 0; i < strToGuess.length(); i++)
                System.out.print(carray[i]);

        } while (p < strToGuess.length());
        System.out.println("");
        System.out.println("Current Status for userInputs= " + userInputs);
        // System.out.println(" P " + p + " len " + strToGuess.length());
        return true;
    }

    // The following routine will return a random String from the list of words:
    // elephant, tiger, monkey, baboon, barbeque, giraffe, simple, zebra,
    // porcupine, aardvark
    String getNextWordToGuess() {
        final int num_words = 10; // change this if you have a different number of words
        // Another way to accomplish the same thing:
        // int num = (int)(num_words* Math.random());
        int num = (int) (num_words * Math.random());
        String index;
        System.out.println("\nIndex :" + index);
        List list;
        list.add("elephant");
        list.add("tiger");
        list.add("monkey");
        list.add("baboon");
        list.add("barbeque");
        list.add("giraffe");
        list.add("simple");
        list.add("zebra");
        list.add("porcupine");
        list.add("aardvark");

        Random rg = new Random();
        String randomElement = "";

        int listSize;
        randomElement = randomElement.get(rg.nextInt(listSize));
        System.out.println("Word is : " + randomElement);
        return (randomElement);
    }

    // The following routine plays the hangman game. It calls getNextWordToGuess to
    // get the word that should be guessed. It then has a loop which outputs the
    // following prompt:
    // Enter next letter
    // A String named userInputs stores all letters selected already.
    // Then the routine printCurrStatus is called to print out the current status of
    // the guessed word. If printCurrStatus returns true, we are done.
    void playGame() {
        String strToGuess = getNextWordToGuess();
        String userInputs = "";
        printCurrStatus(strToGuess, userInputs);
    }

    // main will call playGame to play the hangman game.
    // Then main will issue the prompt:
    // Do you want to play again (y or n)
    // If the answer is "y", then call playGame again, otherwise exit
    public static void main(String[] args) {
        Hangman hangman = new Hangman();
        String response = "";
        do {
            int gameOp2;
            hangman.playGame();
            System.out.println("Congratulations! You have guessed the word correctly!");
            System.out.println("Do you want to play object oriented Hangman again? (y or n): ");

            response = hangman.gameOp2.next();

        } while (response.charAt(0) == 'y');
        System.out.println("Bye");
    }

}
