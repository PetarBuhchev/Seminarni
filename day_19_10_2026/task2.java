public class task2 {

    public static int multiply(int[] numbers) {
        int total = 1;

        for (int number : numbers) {
            total *= number;
        }

        return total;
    }

    public static void main(String[] args) {
        int[] numbers = { 1, 2, 3, 4, 5 };

        System.out.println("Multiplication = " + multiply(numbers));
    }
}