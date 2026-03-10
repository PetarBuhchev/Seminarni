#include <stdio.h>

int main() {
    printf("Enter a: ");
    int a;
    scanf("%d", &a);
    printf("Enter c: ");
    int c;
    scanf("%d", &c);
    printf("Enter h: ");
    int h;
    scanf("%d", &h);
    double area = ((a + c) * h) / 2.0;
    printf("Area of the trapezoid is: %.2f\n", area);
    return 0;
}