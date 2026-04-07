//Наум пише софтуер за малки деца, който има следните команди:
//add(x) - добавяне на елемент X към съществуващите до момента
//delete(x) - премахване на елемент X от съществуващите до момента
//smallest(x) - връща Хтото най-малко число от наличните
//Помогнете на Наум да напише своя софтуер, ако знаете, че X e цяло число. Използвайте динамична памет.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int* elements = (int*)malloc(n * sizeof(int));
    int count = 0; // To keep track of the number of elements
    
    for (int i = 0; i < n; i++) {
        char command[10];
        int x;
        scanf("%s %d", command, &x);
        
        if (strcmp(command, "add") == 0) {
            elements[count++] = x; // Add element
        } else if (strcmp(command, "delete") == 0) {
            // Remove element if it exists
            for (int j = 0; j < count; j++) {
                if (elements[j] == x) {
                    // Shift elements to the left
                    for (int k = j; k < count - 1; k++) {
                        elements[k] = elements[k + 1];
                    }
                    count--; // Decrease count
                    break;
                }
            }
        } else if (strcmp(command, "smallest") == 0) {
            if (count > 0) {
                int smallest = elements[0];
                for (int j = 1; j < count; j++) {
                    if (elements[j] < smallest) {
                        smallest = elements[j];
                    }
                }
                printf("%d\n", smallest); // Print the smallest element
            } else {
                printf("No elements available\n");
            }
        }
    }
    
    free(elements); // Free allocated memory
    return 0;
}