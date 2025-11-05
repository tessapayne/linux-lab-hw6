#include <stdio.h>

int main(void) {
    int num;

    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) {
        puts("Invalid input. Expected an integer.");
        return 1;
    }

    if (num < 0) {                           
        printf("%d is not a palindrome number.\n", num);
        return 0;
    }

    int original = num;
    int reversed = 0;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;   
        num /= 10;
    }

    if (original == reversed) {
        printf("%d is a palindrome number.\n", original);
    } else {
        printf("%d is not a palindrome number.\n", original);
    }
    return 0;
}
