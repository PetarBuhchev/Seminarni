import java.util.Arrays;

public class task8 {

    public static int[] removeDuplicates(int[] array) {
        int uniqueCount = 0;

        // Count unique elements
        for (int i = 0; i < array.length; i++) {
            boolean isDuplicate = false;

            for (int j = 0; j < i; j++) {
                if (array[i] == array[j]) {
                    isDuplicate = true;
                    break;
                }
            }

            if (!isDuplicate) {
                uniqueCount++;
            }
        }

        // Create result array
        int[] result = new int[uniqueCount];
        int index = 0;

        // Fill result array with unique elements
        for (int i = 0; i < array.length; i++) {
            boolean isDuplicate = false;

            for (int j = 0; j < i; j++) {
                if (array[i] == array[j]) {
                    isDuplicate = true;
                    break;
                }
            }

            if (!isDuplicate) {
                result[index++] = array[i];
            }
        }

        return result;
    }

    public static void main(String[] args) {
        int[] numbers = { 1, 2, 3, 2, 4, 1, 5 };

        int[] unique = removeDuplicates(numbers);

        System.out.println(Arrays.toString(unique));
    }
}