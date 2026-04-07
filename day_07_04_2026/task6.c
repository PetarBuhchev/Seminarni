//Създайте динамичен масив от цели числа с n на брой елементи, като n и стойностите на елементите се въвеждат от потребителя. Изтрийте простите числа от този масив и създайте втори динамичен масив, в който ги записвате. Принтирайте двата масива.
#include <stdio.h>
#include <stdlib.h>

int isPrime(int num) {
    if (num <= 1) return 0; // 0 and 1 are not prime
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return 0; // Not prime
    }
    return 1; // Prime
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int* arr = (int*)malloc(n * sizeof(int));
    int* primes = (int*)malloc(n * sizeof(int)); // Allocate maximum possible size for primes
    int primeCount = 0; // To keep track of the number of prime numbers
    
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (isPrime(arr[i])) {
            primes[primeCount++] = arr[i]; // Add prime number to the primes array
        }
    }
    
    // Print the original array
    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Print the prime numbers array
    printf("Prime numbers array:\n");
    for (int i = 0; i < primeCount; i++) {
        printf("%d ", primes[i]);
    }
    printf("\n");
    
    free(arr); // Free allocated memory for original array
    free(primes); // Free allocated memory for primes array
    return 0;
}