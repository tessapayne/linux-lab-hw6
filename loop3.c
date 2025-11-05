#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned)time(NULL));
    int target = (rand() % 20) + 1;

    int guess = 0;
    int rc;

    do {
        printf("Guess the number between 1 and 20: ");

        rc = scanf("%d", &guess);
        if (rc != 1) {
            int ch;
            puts("Please enter an integer.");
            while ((ch = getchar()) != '\n' && ch != EOF) {}
            continue;
        }

        if (guess < target) {
            puts("Higher!");
        } else if (guess > target) {
            puts("Lower!");
        }
    } while (guess != target);

    puts("Correct!");
    return 0;
}
