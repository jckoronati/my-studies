import java.util.ArrayList;
import java.util.Scanner;

public class App {
    public static void main(String[] args) {
        ArrayList<Integer> integerList = new ArrayList<>();

        Scanner scanner = new Scanner(System.in);

        System.out.println("Type a integer numbers list (to exit try stop): ");

        while (true) {
            String value = scanner.next();

            if (value.equals("stop"))
                break; 
            
            integerList.add(Integer.parseInt(value));
        }

        scanner.close();

        System.out.println("Numbers on list: " + integerList);
        int sum = doASum(integerList);
        System.out.println("Total: " + sum);
    }

    public static int doASum(ArrayList<Integer> list) {
        int sum = 0;

        for (int num : list) {
            sum += num;
        }

        return sum;
    }
}
