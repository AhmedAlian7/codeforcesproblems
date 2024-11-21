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

        boolean[] results = new boolean[n];
        for (int i = 0; i < n; i++) {
            String t = scanner.next();
            int first = Integer.parseInt(t.substring(0,3));
            int second = Integer.parseInt(t.substring(3,6));
            results[i] = (getSum(first) == getSum(second));
        }

        for (int i = 0; i < n; i++) {
            if (results[i])
                System.out.println("YES");
            else
                System.out.println("NO");
        }

    }
}