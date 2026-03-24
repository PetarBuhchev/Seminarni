//Да се напише програма, която в масив до 100 елемента намира най-малкият и най-големият елемент и техните индекси в масива. Размерността на масива и стойностите на елементите се въвеждат от клавиатурата.
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int min = arr[0], max = arr[0];
    int min_index = 0, max_index = 0;
    
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
            min_index = i;
        }
        if (arr[i] > max) {
            max = arr[i];
            max_index = i;
        }
    }
    
    printf("Minimum element: %d at index %d\n", min, min_index);
    printf("Maximum element: %d at index %d\n", max, max_index);
    
    return 0;
}