import java.util.Arrays;

public class task4 {

    public static void main(String[] args) {
        int[] numbers = { 8, 3, 1, 9, 4, 2 };
        int[] copy = Arrays.copyOf(numbers, numbers.length);
        Arrays.sort(numbers);
        System.out.println(Arrays.toString(numbers));
        System.out.println(Arrays.toString(copy));
    }
}