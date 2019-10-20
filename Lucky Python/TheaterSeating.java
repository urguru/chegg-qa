import java.util.Scanner;

public class TheaterSeating {
    public static void showTheater(int[][] seats) {
        System.out.println("Available Theater Seating");
        for (int r = 8; r >= 0; r--) {
            System.out.println();
            for (int c = 0; c < 10; c++) {
                if (seats[r][c] == 99)
                    System.out.print(" X ");
                else
                    System.out.print(" $" + seats[r][c]);
            }
        }
    }

    public static boolean allSeatsTaken(int[][] seats) {
        boolean theaterFull = true;
        for (int r = 8; r >= 0; r--) {
            for (int c = 0; c < 10; c++) {
                if (seats[r][c] != 99) {
                    theaterFull = false;
                    return false;
                }
            }
        }
        return theaterFull;
    }

    public static void main(String[] args) {
        // initial values - rows and then columns
        int[][] seats = { { 30, 40, 50, 50, 50, 50, 50, 50, 40, 30 }, { 20, 30, 30, 40, 50, 50, 40, 30, 30, 20 },
                { 20, 20, 30, 30, 40, 40, 30, 30, 20, 20 }, { 10, 10, 20, 20, 20, 20, 20, 20, 10, 10 },
                { 10, 10, 20, 20, 20, 20, 20, 20, 10, 10 }, { 10, 10, 20, 20, 20, 20, 20, 20, 10, 10 },
                { 10, 10, 10, 10, 10, 10, 10, 10, 10, 10 }, { 10, 10, 10, 10, 10, 10, 10, 10, 10, 10 },
                { 10, 10, 10, 10, 10, 10, 10, 10, 10, 10 } };
        Scanner in = new Scanner(System.in);
        boolean quitFlag = false;
        while (allSeatsTaken(seats) == false) {
            showTheater(seats);
            System.out.println("\n\nPick a seat by row and then column or <q> to quit: ");
            int seatRow = -1;
            int seatColumn = -1;
            if (!in.hasNextInt()) {
                quitFlag = true;
            } else {
                seatRow = in.nextInt();
                seatRow = seatRow - 1;
                if ((seatRow > 8) || (seatRow < 0))
                    seatRow = 5;
                seatColumn = in.nextInt();
                seatColumn = seatColumn - 1;
                if ((seatColumn > 9) || (seatColumn < 0))
                    seatColumn = 5;
            }
            if (seats[seatRow][seatColumn] == 99)
                System.out.println("That seat is taken, choose another");
            else
                seats[seatRow][seatColumn] = 99;
            if (allSeatsTaken(seats)) {
                showTheater(seats);
                System.out.println("The Theater is Sold Out!");
            }
        }
        System.out.println("Thank you ... !!");
    }
}