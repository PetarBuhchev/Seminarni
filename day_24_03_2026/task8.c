//Потребителят въвежда 10 числа в масив от 20 елемента. След това въвежда числа, като с всяко въведено число указва индекса, където да бъде вмъкнато това число (числото избутва останалите). Въвеждането спира при вход 0 или при запълване на масива. Да се изведе полученият масив на екрана.
#include <stdio.h>

int main() {
    int arr[20]; // Initialize all elements to 0
    int n = 10; // Number of initial elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int num, index;
    while (1) {
        scanf("%d", &num);
        if (num == 0) {
            break; // Stop input on 0
        }
        scanf("%d", &index);
        if (index < 0 || index >= 20) {
            printf("Invalid index. Please enter a valid index between 0 and 19.\n");
            continue;
        }
        // Shift elements to the right from the index
        for (int i = 19; i > index; i--) {
            arr[i] = arr[i - 1];
        }
        arr[index] = num; // Insert the new number at the specified index
    }
    
    // Print the resulting array
    printf("Resulting array:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}