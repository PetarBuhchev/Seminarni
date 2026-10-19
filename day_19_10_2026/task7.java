public class task7 {

    public static int countOccurences(int[] numbers, int n) {
        int count = 0;

        for (int number : numbers) {
            if (number == n) {
                count++;
            }
        }
        if (count == 0) {
            return -1;
        }
        return count;
    }

    public static void main(String[] args) {
        int[] numbers = { 1, 2, 3, 4, 5 };

        System.out.println("Count = " + countOccurences(numbers, 2));
    }
}