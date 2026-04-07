//Даден е масив NxM запълнен с цели числа. Намерете числото, което има околни на него сбора, на които е най-голям. (околно е всяко число , което се намира до, над, под или по диагонал на текущото число на отстояние не повече от 1 поле)
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
    int maxSum = -1000000; // Initialize to a very small number
    int result = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int sum = 0;
            // Check all adjacent cells
            for (int di = -1; di <= 1; di++) {
                for (int dj = -1; dj <= 1; dj++) {
                    if (di == 0 && dj == 0) continue; // Skip the cell itself
                    int ni = i + di;
                    int nj = j + dj;
                    if (ni >= 0 && ni < n && nj >= 0 && nj < m) {
                        sum += arr[ni][nj];
                    }
                }
            }
            if (sum > maxSum) {
                maxSum = sum;
                result = arr[i][j];
            }
        }
    }
    printf("%d\n", result);
    return 0;
}