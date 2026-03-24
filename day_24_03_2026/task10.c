//Дадена е редицата от целия числа a0,a1,a2,...an-1, (n>1) и цяло число x. Да се напише програма, която намира колко пъти x се съдържа в редицата. Броят на числата в редицата и техните стойности се въвеждат от потребителя.
#include <stdio.h>

int main() {
    int n, x;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    
    printf("The number %d appears %d times in the sequence.\n", x, count);
    
    return 0;
}