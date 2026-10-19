import java.lang.reflect.Array;
import java.util.Arrays;

public class task3 {

    public static void main(String[] args) {
        int[] arr1 = { 1, 2, 3 };
        int[] arr2 = { 1, 2, 3 };

        System.out.println(Arrays.equals(arr1, arr2));
        System.out.println(arr1 == arr2);
    }
}