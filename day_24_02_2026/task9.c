#include <stdio.h>

int main() {
    double w,h;
    printf("Enter width: ");
    scanf("%lf", &w);
    printf("Enter height: ");
    scanf("%lf", &h);
    double area = w * h;
    double area_rabotno_mqsto = 0.7*1.2;
    //Премахва се вратата
    area = area - area_rabotno_mqsto;
    //Премахва се катедрата
    area = area - 2*area_rabotno_mqsto;
    double coridor = (w-1)*h;
    area = area - coridor;
    double count = area/area_rabotno_mqsto;
    printf("The number of desks that can fit in the classroom is: %.0lf\n", count);
}