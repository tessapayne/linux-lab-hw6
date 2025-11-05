#include <stdio.h>
#include <stdlib.h>

int main(void) {
    long long n;
    printf("Enter an integer: ");
    if (scanf("%lld", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    long long x = (n < 0) ? llabs(n) : n; //I added this line for using the ternary operator
    long long sum = 0;

    while (x > 0) {
        long long d = x % 10;
        sum += d * d;
        x /= 10;
    }

    if (n == 0) sum = 0;
    printf("The sum of the squares of the digits is %lld.\n", sum);
    return 0;
}
