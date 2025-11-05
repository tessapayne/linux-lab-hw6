#include <stdio.h>

int main(void) {
    int n;
    int a = 0, b = 1, next, count = 0;

    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        puts("Invalid input. Please enter a positive integer.");
        return 1;
    }

    while (count < n) {
        if (count == 0) {
            printf("%d", a);
        } else if (count == 1) {
            printf(" %d", b);
        } else {
            next = a + b;
            printf(" %d", next);
            a = b;
            b = next;
        }
        count++;
    }

    printf("\n");
    return 0;
}
