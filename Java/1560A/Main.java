import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {

    public static boolean isDisliked(int number) {
        return (number % 3 == 0 || number % 10 == 3);
    }
    public static List<Integer> generateSequence(int maxK) {
        List<Integer> list = new ArrayList<>();
        int n =1;
        while (list.size() < maxK) {
            if (!isDisliked(n))
                list.add(n);
            ++n;
        }
        return list;
    }
    public static void main(String[] args) { // 1,2,4,5,7,8,10,11,14,16,…
        Scanner reader = new Scanner(System.in);
        int t = reader.nextInt();
        int[] queries = new int[t];
        int maxK =0;
        for (int i =0; i < t; i++) {
            queries[i] = reader.nextInt();
            maxK = Math.max(queries[i], maxK);
        }

        List<Integer> sequence = generateSequence(maxK);

        for (int i = 0; i < t; i++) {
            System.out.println(sequence.get(queries[i] -1));
        }
    }
}