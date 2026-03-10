#include <stdio.h>

int main() {
    printf("Enter inches: ");
    int inches;
    scanf("%d", &inches);
    printf("Inches: %d\n", inches);
    double centimeters = inches * 2.54;
    double meters = centimeters / 100.0;
    double decimeters = centimeters / 10.0;
    double millimeters = centimeters * 10.0;
    printf("Millimeters: %.2f\n", millimeters);
    printf("Centimeters: %.2f\n", centimeters);
    printf("Decimeters: %.2f\n", decimeters);
    printf("Meters: %.2f\n", meters);
    return 0;
}