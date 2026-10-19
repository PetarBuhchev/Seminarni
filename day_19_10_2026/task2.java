import java.util.Arrays;

public class task2 {

    public static void multiply(int[] numbers, int factor) {

        for (int number : numbers) {
            number *= factor;
        }

        System.out.println(Arrays.toString(numbers));
    }

    public static void main(String[] args) {
        int[] numbers = { 1, 2, 3, 4, 5 };

    }
}