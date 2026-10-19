import java.util.Arrays;

public class task6 {

    public static void reverseArray(int[] array) {
        for (int i = 0; i < array.length - 1; i++) {
            for (int j = 0; j < array.length - 1 - i; j++) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    public static void main(String[] args) {
        int[] numbers = { 1, 2, 3, 4, 5 };
        reverseArray(numbers);
        System.out.println(Arrays.toString(numbers));
    }
}