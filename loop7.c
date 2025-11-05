#include <stdio.h>
#include <string.h>

int main(void) {
    char password[50];
    const char correct[] = "tcufrogs345";

    do {
        printf("Enter password: ");
        scanf("%49s", password);

        if (strcmp(password, correct) != 0) {
            printf("Incorrect password.\n");
        }
    } while (strcmp(password, correct) != 0);

    printf("Access granted!\n");
    return 0;
}
