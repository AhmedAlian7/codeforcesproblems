import java.util.Scanner;

public class Main
{
    static int getSum(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int n= scanner.nextInt();
        scanner.nextLine(); // Consume the newline left after reading `n`

        int[] results = new int[n];
        for (int i = 0; i < n; i++) {
            int rate = scanner.nextInt();
            if (rate >= 1900)
                results[i] = 1;
            else if (rate >= 1600)
                results[i] = 2;
            else if (rate >= 1400)
                results[i] =3;
            else
                results[i] = 4;
        }

        for (int i = 0; i < n; i++) {
            System.out.printf("Division %d%n", results[i]);
        }

    }
}