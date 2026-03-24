//Напишете програма, която получава редица с N цели числа. След това получава цяло число K. Отместете всички елементи на редицата с K позиции, като използвате праилото за превъртане (когато елемент от последната позиция трябва да се измести то той трябва да отиде на първа позиция в редицата).
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    // Normalize k to be within the bounds of the array length
    k = k % n;
    // Create a temporary array to hold the shifted elements
    int temp[n];
    for (int i = 0; i < n; i++) {
        if (i + k >= n-1) {
            temp[i] = arr[i + k];
        }

        else{
            temp[i] = arr[(i + k) % n + 1];
        }
    }
    // Copy the shifted elements back to the original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    // Print the shifted array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}