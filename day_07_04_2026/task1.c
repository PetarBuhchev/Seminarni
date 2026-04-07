//Даден е двумерен масив NxM от цели числа. Проверете дали всеки ред съдържа числа, подредени в нарастващ ред, а всяка колона съдържа числа подредени по низходящ ред.
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
    int isSorted = 1; 
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m - 1; j++) {
            if (arr[i][j] >= arr[i][j + 1]) {
                isSorted = 0;
                break;
            }
        }
        if (!isSorted) {
            break;
        }
    }
    
    if (isSorted) {
        for (int j = 0; j < m; j++) {
            for (int i = 0; i < n - 1; i++) {
                if (arr[i][j] <= arr[i + 1][j]) {
                    isSorted = 0;
                    break;
                }
            }
            if (!isSorted) {
                break;
            }
        }
    }
    if (isSorted) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}