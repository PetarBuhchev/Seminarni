#include <stdio.h>

int main() {
    int n;
    char day;
    scanf("%d %c", &n, &day);
    double taxi, bus, train;
    if (n < 20) {
        if (day == 'D') {
            taxi = 0.7 + 0.79 * n;
            printf("%.2lf\n", taxi);
        }
        else {
            taxi = 0.7 + 0.9 * n;
            printf("%.2lf\n", taxi);
        }
    }
    else if (n >= 20 && n < 100) {
        bus = 0.09 * n;
        printf("%.2lf\n", bus);
    }
    else {
        train = 0.06 * n;
        printf("%.2lf\n", train);
    }
}