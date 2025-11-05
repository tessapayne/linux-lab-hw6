#include <stdio.h>

int main(void) {
    int L, R;

//These lines will read the range endpoints and validate the input
    printf("Enter start of range: ");
    if (scanf("%d", &L) != 1) { puts("Invalid input."); return 1; }
    printf("Enter end of range: ");
    if (scanf("%d", &R) != 1) { puts("Invalid input."); return 1; }

//Normalize; so ensuring that L is <= R, and to start at the 1st possible prime (2)
    if (L > R) { int t = L; L = R; R = t; }
    if (R < 2) { printf("\n"); return 0; }
    if (L < 2) L = 2;

//This is the outer loop
    for (int n = L; n <= R; n++) {
        int prime = 1;
        for (int d = 2; d * d <= n; d++) { //This is the inner loop
            if (n % d == 0) { prime = 0; break; }
        }
        if (prime) printf("%d ", n); //Printing primes space separated
    }
    printf("\n");
    return 0;
}
