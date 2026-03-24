//Напишете програма, която получава 2 числа (множител и брой). Трябва да се създаде масив с дължина дадения брой, който съдържа само цели числа, които са кратни на дадения множител. Числата трябва да са само положителни и трябва да са подредени във възходящ ред, започвайки от стойността на множителя.

#include <stdio.h>

int main() {
    int multiplier, count;
    scanf("%d %d", &multiplier, &count);
    
    int arr[count];
    for (int i = 0; i < count; i++) {
        arr[i] = multiplier * (i + 1);
    }
    
    // Print the resulting array
    for (int i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}