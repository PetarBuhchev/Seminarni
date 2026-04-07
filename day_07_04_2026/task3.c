//Дадена е матрица NxM от цели числа. Разменете редовете с най-голям и най-малък елемент в матрицата.
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int maxElement = arr[0][0];
    int minElement = arr[0][0];
    int maxRow = 0;
    int minRow = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] > maxElement) {
                maxElement = arr[i][j];
                maxRow = i;
            }
            if (arr[i][j] < minElement) {
                minElement = arr[i][j];
                minRow = i;
            }
        }
    }
    
    // Swap the rows
    for (int j = 0; j < m; j++) {
        int temp = arr[maxRow][j];
        arr[maxRow][j] = arr[minRow][j];
        arr[minRow][j] = temp;
    }
    
    // Print the modified matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}