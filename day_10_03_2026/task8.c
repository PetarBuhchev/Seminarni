#include <stdio.h>

int main() {
    int v, p1, p2, h;
    scanf("%d %d %d %d", &v, &p1, &p2, &h);

    double water1 = p1 * h;
    double water2 = p2 * h;
    double total_water = water1 + water2;

    if (total_water <= v) {
        double percent_full = (total_water / v) * 100;
        double percent_p1 = (water1 / total_water) * 100;
        double percent_p2 = (water2 / total_water) * 100;
        printf("The pool is %.0f%% full. Pipe 1: %.0f%%. Pipe 2: %.0f%%.\n", 
               percent_full, percent_p1, percent_p2);
    } else {
        double overflow = total_water - v;
        printf("For %.2f hours the pool overflows with %.2f liters.\n", h, overflow);
    }

    return 0;
}