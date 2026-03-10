#include <stdio.h>

int main() {
    printf("Enter amount in leva: ");
    int leva;
    scanf("%d", &leva);
    double dollars = leva * 0.57;
    double euros = leva * 0.51;
    double pounds = leva * 0.44;
    printf("Dollars: %.2f\n", dollars);
    printf("Euros: %.2f\n", euros);
    printf("Pounds: %.2f\n", pounds);
    return 0;
}