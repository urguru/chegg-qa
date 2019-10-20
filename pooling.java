import java.util.Scanner;

class pooling {
    public static void main(String args[]) {
        // Scanner for taking the input
        Scanner scanner = new Scanner(System.in);
        // Assinging a variable for storing the topic names.There are five topics
        String[] topics = new String[] { "History", "Politics", "Geography", "Environment", "Civics" };
        //Having a storage for taking the ratings from upto 10 users
        int[][] points = new int[5][10];
        // Sum and average arrays of the ratings for each topics
        float[] sum = new float[5];
        float[] average = new float[5];
        // n is the number of participants
        int n;
        // Highest and lowest to keep track of the highest and lowest average rating for a topic
        float highest=Float.MIN_VALUE,lowest=Float.MAX_VALUE;
        int min_index=-1,max_index=-1;
        System.out.println("Enter the number of participants");
        n = scanner.nextInt();
        System.out.println("Enter your ratings for the topics from 1 to 10");
        // The for lop below prints the names of all the topics
        for (int i = 0; i < 5; ++i) {
            System.out.print(topics[i] + " ");
            if (i == 4)
                System.out.println();
        }
        // This loop takes the input values for the each topic
        for (int i = 0; i < n; ++i) {
            points[0][i] = scanner.nextInt();
            points[1][i] = scanner.nextInt();
            points[2][i] = scanner.nextInt();
            points[3][i] = scanner.nextInt();
            points[4][i] = scanner.nextInt();
        }
        // Calculating the sum of ratings for all the topics
        for (int i = 0; i < n; ++i) {
            sum[0] += points[0][i];
            sum[1] += points[1][i];
            sum[2] += points[2][i];
            sum[3] += points[3][i];
            sum[4] += points[4][i];
        }
        // Calculating the average for all the topics
        for(int i=0;i<5;++i)
        {
            average[i] = sum[i] / n;
        }
        // All the statements below are for printing the table

        System.out.print(String.format("%-15s", "topics"));
        // This loop prints the name of all the users
        for (int i = 1; i <=n; ++i) {
            String s = "User " + i;
            System.out.print(String.format("%-7s", s));
        }
        System.out.println("Average");
        for (int i = 0; i < 5; ++i) {
            // Printing the name of the topic 
            System.out.print(String.format("%-15s", topics[i]));
            for (int j = 0; j < n; ++j) {
                // Printing the rating by each user for that topic
                System.out.print(String.format("%-7s", points[i][j]));
            }
            // We find the highest and the lowest ratings here the 
            if(average[i]>highest)
            {
                max_index=i;
                highest=average[i];
            }
            if(average[i]<lowest)
            {
                min_index=i;
                lowest=average[i];
            }
            System.out.print(average[i]);
            System.out.println();
        }
        System.out.println(topics[max_index]+" is the topic with the highest rating of "+ highest);
        System.out.println(topics[min_index] + " is the topic with the lowest rating of " + lowest);
    }
}