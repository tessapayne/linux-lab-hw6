#include <stdio.h>

int main(void) {
    int n;
    long long fact = 1;

    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (n < 0) {
        printf("Factorial of a negative number is not defined.\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("The factorial of %d is %lld.\n", n, fact);
    return 0;
}
