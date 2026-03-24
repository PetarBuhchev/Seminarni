//Дадена е редица с N цели числа. Да се намери K-тия по големина елемент в редицата. Да се направи проверка дали К e по-малко от N. Ако не е, да се изведе съобщение за грешка.
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    if (k >= n) {
        printf("Error: K must be less than N.\n");
        return 1;
    }
    // Sort the array in descending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("The %d-th largest element is: %d\n", k, arr[k - 1]);
    return 0;
}