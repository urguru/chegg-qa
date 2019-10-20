
//This package is for the scanner class 
import java.util.*;

class BarChartScoreboard {
    public static void main(String args[]) {
        //A variable for total number of players
        int players;
        System.out.print("Enter the number of players: ");
        //An object of the scanner class
        Scanner in = new Scanner(System.in);
        //Reads the total number of players form the user
        players = in.nextInt();
        //Exits if the number of players is 0
        if (players == 0) {
            System.out.println("No players to display?  Goodbye:");
            System.exit(0);
        } else {
            //Creates variables to store names and scores using two parallel arrays
            String names[] = new String[players];
            int scores[] = new int[players];
            //These are declared to check for highest score and longest name
            int highest_score = Integer.MIN_VALUE;
            int longest_name = Integer.MIN_VALUE;
            for (int i = 0; i < players; ++i) {
                //After reading an integer when we press enter it generates a newline feed
                //So of we dont include this extra newline feed then the string to read the name will take that newlinefeed and we wont be able to type the name
                in.nextLine();
                System.out.print("Enter a player name: ");
                names[i] =in.nextLine();
                System.out.print("Enter the score for " + names[i] + ": ");
                scores[i] = in.nextInt();
                //Updates the values to their maximum
                highest_score = Math.max(highest_score, scores[i]);
                longest_name = Math.max(longest_name, names[i].length());
            }
            System.out.println("Current Scoreboard");
            System.out.println("------------------");
            for (int i = 0; i < players; ++i) {
                //Counts how much padding should be there
                int stars=0;
                int padding = longest_name - names[i].length();
                if(highest_score!=0)
                stars = (scores[i] * 50) / highest_score;
                System.out.print(names[i]);
                print_padding(padding + 1);
                print_stars(stars);
                System.out.println();
            }
        }

    }

    // Function to print padding
    public static void print_padding(int n) {
        for (int i = 0; i < n; ++i) {
            System.out.print(" ");
        }
    }

    // Function to print the stars
    public static void print_stars(int n) {
        for (int i = 0; i < n; ++i) {
            System.out.print("*");
        }
    }
}