#include <stdio.h>

int main() {
    int cena_zelenchuk, cena_plodove;
    printf("Enter a number: ");
    scanf("%d", &cena_zelenchuk);
    printf("Enter another number: ");
    scanf("%d", &cena_plodove);
    double zelenchuk = (double)cena_zelenchuk * 1.95;
    double plodove = (double)cena_plodove * 1.95;
    double kolichestvo_zelenchuk, kolichestvo_plodove;
    printf("Enter quantity of vegetables: ");
    scanf("%lf", &kolichestvo_zelenchuk);
    printf("Enter quantity of fruits: ");
    scanf("%lf", &kolichestvo_plodove);
    double total = (zelenchuk * kolichestvo_zelenchuk) + (plodove * kolichestvo_plodove);
    printf("Total price: %.2f\n", total);
}