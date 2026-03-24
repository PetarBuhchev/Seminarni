//Напишете програма, която намира максималната редица от последователни еднакви елементи в масив и ги отпечатва. Изхода трябва да е във формат: "Изход": 2 2 2
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max_length = 1;
    int current_length = 1;
    int max_element = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            current_length++;
        } else {
            if (current_length > max_length) {
                max_length = current_length;
                max_element = arr[i - 1];
            }
            current_length = 1;
        }
    }
    // Check at the end of the array
    if (current_length > max_length) {
        max_length = current_length;
        max_element = arr[n - 1];
    }
    printf("Output: ");
    for (int i = 0; i < max_length; i++) {
        printf("%d ", max_element);
    }
    printf("\n");
    return 0;
}