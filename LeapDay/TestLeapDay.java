package LeapDay;

import java.io.*;

import java.util.Scanner;

public class TestLeapDay {

    public static void main(String[] args)

    {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter day:");

        int d = Integer.parseInt(sc.nextLine());

        System.out.println("Enter month:");

        int m = Integer.parseInt(sc.nextLine());

        System.out.println("Enter year:");

        int y = Integer.parseInt(sc.nextLine());

        int leap = 0;

        if ((y % 400 == 0) || (y % 4 == 0) && (y % 100 != 0))

            leap = 1;

        if (m >= 1 || m <= 12)

        {

            if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && (d > 31))

            {

                System.out.println("Invalid day");

            }

            else if ((m == 4 || m == 6 || m == 9 || m == 11) && (d > 30))

            {

                System.out.println("Invalid day");

            }

            else if (m == 2 && d > 28 && leap == 0)

            {

                System.out.println("Invalid day");

            }

            else if (m == 2 && d > 29 && leap == 1)

            {

                System.out.println("Invalid day");

            }

            else

            {

                classDay dd = new classDay(d, m);

                int n = dd.findDayNum();

                System.out.println("Day number of " + m + "/" + d + "/" + y + " is " + n);

            }

        }

        else

        {

            System.out.println("Invalid month");

        }

    }

}