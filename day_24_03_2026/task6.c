//За дадена редица от числа да се намери и отпечата най-дългата нарастваща (или намаляваща) под редица от нея.
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max_length_inc = 1, max_length_dec = 1;
    int current_length_inc = 1, current_length_dec = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            current_length_inc++;
            current_length_dec = 1;
        } else if (arr[i] < arr[i - 1]) {
            current_length_dec++;
            current_length_inc = 1;
        } else {
            current_length_inc = 1;
            current_length_dec = 1;
        }
        if (current_length_inc > max_length_inc) {
            max_length_inc = current_length_inc;
        }
        if (current_length_dec > max_length_dec) {
            max_length_dec = current_length_dec;
        }
    }
    printf("Longest increasing subsequence length: %d\n", max_length_inc);
    printf("Longest decreasing subsequence length: %d\n", max_length_dec);
    return 0;
}