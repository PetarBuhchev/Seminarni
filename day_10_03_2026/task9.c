#include <stdio.h>

int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    double area_grapes_for_wine = 0.4 * x;
    double grapes_for_wine = area_grapes_for_wine * y;
    double wine = grapes_for_wine / 2.5;
    if (wine >= z) {
        printf("Good harvest this year! Total wine: %.0f liters.\n", wine);
        printf("Liters left: %.0f.\n", wine - z);
    }
    else {
        printf("It will be a tough winter! More %.0f liters wine needed.\n", z - wine);
    }
}