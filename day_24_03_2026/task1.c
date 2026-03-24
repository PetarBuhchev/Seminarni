//Всяка редица от равни числа в едномерен сортиран масив, се нарича площадка. Да се напише програма, която намира началото и дължината на най-дългата площадка в даден сортиран във възходящ ред едномерен масив (въвеждат се N и самият масив от потребителя).
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
    int start_index = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            current_length++;
        } else {
            if (current_length > max_length) {
                max_length = current_length;
                start_index = i - current_length;
            }
            current_length = 1;
        }
    }
    // Check at the end of the array
    if (current_length > max_length) {
        max_length = current_length;
        start_index = n - current_length;
    }
    printf("Start index: %d, Length: %d\n", start_index, max_length);
    return 0;
}