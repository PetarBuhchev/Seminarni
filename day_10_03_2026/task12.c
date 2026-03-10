#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int height = 2 * (n-2) + 1;
    for (int i = 1; i <= height; i++) {
        if (i == (int)(height/2+1))
        {
            for (int j = 1; j < n; j++) {
                printf(" ");
            }
        }
        else {
            for (int j = 0; j < n - 2; j++) {
                printf("*");
            }
            printf("\\");
            printf("/");
            for (int j = 0; j < n - 2; j++) {
                printf("*");
            }
        }
        printf("@\n");
    }
}