import java.util.Scanner;

public class BitPlusPlus {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt(); // Number of statements
        scanner.nextLine(); // Consume newline

        int x = 0; // Initial value of variable x

        // Loop through each statement
        for (int i = 0; i < n; i++) {
            String statement = scanner.nextLine();

            // Check if statement contains "++" or "--" using equals() function
            if (statement.equals("X++") || statement.equals("++X")) {
                x++; // Increase x by 1
            } else {
                x--; // Decrease x by 1
            }
        }

        System.out.println(x); // Print the final value of x

        scanner.close();
    }
}
