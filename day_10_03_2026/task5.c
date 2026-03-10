#include <stdio.h>

int main() {
    int t1,t2,t3;
    scanf("%d", &t1);
    scanf("%d", &t2);
    scanf("%d", &t3);
    int total_seconds = t1 + t2 + t3;
    int minutes = total_seconds / 60;
    int seconds = total_seconds % 60;

    printf("%d:%02d\n", minutes, seconds);

    return 0;
}