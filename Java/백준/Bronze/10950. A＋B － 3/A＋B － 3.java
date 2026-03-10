import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int A = in.nextInt();
        int[] answers = new int[A];

        for (int i = 0; i < A; i++) {
            int B = in.nextInt();
            int C = in.nextInt();
            
            answers[i] = B+C;
        }

        for (int i = 0; i < A; i++) {
            System.out.println(answers[i]);
        }
    }
}