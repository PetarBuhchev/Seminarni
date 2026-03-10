#include <stdio.h>

int main() {
    int points, bonus;
    scanf("%d", &points);
    if (points <= 100) {
        bonus = 5;
    } else if (points > 100 && points <= 1000) {
        bonus = points * 0.20;
    } else {
        bonus = points * 0.10;
    }
    if (points % 2 == 0) {
        bonus += 1;
    } else if (points % 10 == 5) {
        bonus += 2;
    }
    printf("Bonus points: %d\n", bonus);
    printf("Total points: %d\n", points + bonus);
    return 0;
}