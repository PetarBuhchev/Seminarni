#include <stdio.h>

int main() {
    printf("Enter a degree in Celcius: ");
    int celcius;
    scanf("%d", &celcius);
    double fahrenheit = (celcius * 9.0 / 5.0) + 32.0;
    printf("Fahrenheit: %.2f\n", fahrenheit);
    return 0;
}