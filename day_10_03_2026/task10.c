#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    double p1,p2,p3,p4,p5;
    int p1_count = 0, p2_count = 0, p3_count = 0, p4_count = 0, p5_count = 0;
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        if (num < 200) {
            p1_count++;
        } else if (num >= 200 && num < 400) {
            p2_count++;
        } else if (num >= 400 && num < 600) {
            p3_count++;
        } else if (num >= 600 && num < 800) {
            p4_count++;
        } else {
            p5_count++;
        }
    }
    int total = p1_count + p2_count + p3_count + p4_count + p5_count;
    p1 = (double)p1_count / total * 100;
    p2 = (double)p2_count / total * 100;
    p3 = (double)p3_count / total * 100;
    p4 = (double)p4_count / total * 100;
    p5 = (double)p5_count / total * 100;
    printf("%.2f%%\n", p1);
    printf("%.2f%%\n", p2);
    printf("%.2f%%\n", p3);
    printf("%.2f%%\n", p4);
    printf("%.2f%%\n", p5);
}