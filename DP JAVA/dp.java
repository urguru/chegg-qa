import java.util.*;

class dp {
    public static void main(String args[]) {
        String dna1, dna2;
        Scanner in = new Scanner(System.in);
        dna1 = in.nextLine();
        dna2 = in.nextLine();
        int arr[][] = new int[dna1.length() + 1][dna2.length() + 1];
        for (int i = 0; i <= dna1.length(); ++i) {
            for (int j = 0; j <=dna2.length(); ++j) {
                if (i == 0 || j == 0) {
                    arr[i][j] = 0;
                } else {
                    if (dna1.charAt(i - 1) == dna2.charAt(j - 1)) {
                        arr[i][j] = arr[i - 1][j - 1] + 2;
                    } else {
                        arr[i][j] = Math.max(arr[i][j - 1], arr[i - 1][j]) - 1;
                    }
                }
            }
        }
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 4; ++j) {
                System.out.print(arr[i][j]);
            }
            System.out.println(" ");
        }
        System.out.println(arr[dna1.length()][dna2.length()]);
    }
}