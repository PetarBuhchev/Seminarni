#include <stdio.h>
#include <math.h>

int main() {
    double x1,x2,x3,y1,y2,y3;
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter y1: ");
    scanf("%lf", &y1);  
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y2: ");
    scanf("%lf", &y2);
    printf("Enter x3: ");
    scanf("%lf", &x3);
    printf("Enter y3: ");
    scanf("%lf", &y3);
    double a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    double c = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
    double p = (a + b + c) / 2.0;
    double area = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("Area of the triangle is: %.2lf\n", area);
}