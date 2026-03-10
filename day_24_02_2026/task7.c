#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2;

    // Въвеждане на координатите за точка А
    printf("Въведете x1 и y1 за точка А: ");
    scanf("%lf %lf", &x1, &y1);

    // Въвеждане на координатите за точка Б
    printf("Въведете x2 и y2 за точка Б: ");
    scanf("%lf %lf", &x2, &y2);

    // Изчисляване на страните (абсолютна стойност на разликата)
    double width = fabs(x1 - x2);
    double height = fabs(y1 - y2);

    // Изчисляване на лицето
    double area = width * height;

    printf("Лицето на правоъгълника е: %.2lf\n", area);

    return 0;
}