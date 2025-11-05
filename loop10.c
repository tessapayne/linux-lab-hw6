#include <stdio.h>

int main(void) {
    int n;

//Reading number of rows
    printf("Enter number of rows: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        puts("Invalid input.");
        return 1;
    }
    for (int row = 1; row <= n; row++) { //For each row from 1 to n
        for (int sp = 0; sp < n - row; sp++) putchar(' '); //Print leading spaces so stars are centered correctly
        for (int star = 0; star < 2 * row - 1; star++) putchar('*');//Print the stars for this row
        putchar('\n'); //Move to the next line after finishing the row
    }
    return 0;
}
