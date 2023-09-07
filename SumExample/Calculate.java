import java.util.Scanner;

public class Calculate {
    public static void main(String[] args) {
        System.out.println("Type a value to dividend: ");

        Scanner scanner = new Scanner(System.in);

        int firstValue = scanner.nextInt();

        int secondValue = scanner.nextInt();

        scanner.close();

        int result = calculate(firstValue, secondValue);

        System.out.println(result);
    }

    public static int calculate(int a, int b) {
        try {
            return a / b;
        } catch (RuntimeException e) {
            return -1;
        } catch (ArithmeticException e) {
            return 0;
        } finally {
            System.out.println("concluído");
        }
    }
}