#include <stdio.h>

int main() {
    int hour,minute;
    scanf("%d:%d", &hour, &minute);
    minute += 15;
    if (minute >= 60) {
        minute -= 60;
        hour++;
    }
    if (hour >= 24) {
        hour -= 24;
    }
    printf("%d:%02d", hour, minute);
    return 0;
}