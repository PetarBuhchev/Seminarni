//Да се напише програма, която проверява дали между елементите на редицаата a0,a1,...,an са изпълнени релациите a0<a1>a2<a3>... и т.н. (т.е. a0<a1, a1>a2, a2<a3, a3>a4 и т.н.). Резултатът от проверката да се изведе на екрана.
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int is_valid = 1;
    for (int i = 0; i < n - 1; i++) {
        if (i % 2 == 0) { // Even index: arr[i] < arr[i + 1]
            if (arr[i] < arr[i + 1]) {
                is_valid = 0;
                break;
            }
        } else { // Odd index: arr[i] > arr[i + 1]
            if (arr[i] > arr[i + 1]) {
                is_valid = 0;
                break;
            }
        }
    }
    if (is_valid) {
        printf("The sequence satisfies the relations.\n");
    } else {
        printf("The sequence does not satisfy the relations.\n");
    }
    return 0;
}