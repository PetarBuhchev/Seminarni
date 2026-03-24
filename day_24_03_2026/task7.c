//Да се напише програма, която намира последователност от числа в масив, които имат сума равна на число, въведено от потребителя.
#include <stdio.h>

int main() {
    int n, target_sum;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target_sum);
    
    // Find and print all sequences with the target sum
    printf("Sequences with sum %d:\n", target_sum);
    for (int i = 0; i < n; i++) {
        int current_sum = 0;
        
        for (int j = i; j < n; j++) {
            current_sum += arr[j];
            
            if (current_sum == target_sum) {
                printf("Exist");
                return 0;
            }
        }
    }
    printf("Not exist\n");
    
    return 0;
}