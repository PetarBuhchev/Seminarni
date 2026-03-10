#include <stdio.h>

int main() {
    printf("Enter degree: ");
    int degree;
    scanf("%d", &degree);
    double radians = degree * 3.14159265358979323846 / 180.0;
    printf("Radians: %.6f\n", radians);
    return 0;
}