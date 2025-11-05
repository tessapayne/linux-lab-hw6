#include <stdio.h>

//Clear the rest of the line after a bad scanf
static void flush_line(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}

int main(void) {
    int balance = 1000;   //Starting balance
    int choice;           //Menu selection

    puts("Welcome to the ATM!");

    do {
        //The menu
        puts("1. Check Balance");
        puts("2. Deposit");
        puts("3. Withdraw");
        puts("4. Exit");
        printf("Enter your choice: ");

        //Read the choice; if bad input, reprompt next loop
        if (scanf("%d", &choice) != 1) {
            puts("Invalid choice.");
            flush_line();
            continue;
        }

        switch (choice) {
            case 1: //Show the balance
                printf("Your balance is $%d.\n", balance);
                break;

            case 2: { //Deposit flow
                int amt;
                printf("Enter deposit amount: ");
                if (scanf("%d", &amt) != 1 || amt <= 0) {
                    puts("Invalid amount.");
                    flush_line();
                    break;
                }
                balance += amt;
                printf("Deposit successful. Your new balance is $%d.\n", balance);
                break;
            }

            case 3: { //Withdraw flow
                int amt;
                printf("Enter withdraw amount: ");
                if (scanf("%d", &amt) != 1 || amt <= 0) {
                    puts("Invalid amount.");
                    flush_line();
                    break;
                }
                if (amt > balance) {          //No overdraft
                    puts("Insufficient funds.");
                    break;
                }
                balance -= amt;
                printf("Withdrawal successful. Your new balance is $%d.\n", balance);
                break;
            }

            case 4: //Exit option
                puts("Thank you for using the ATM!");
                break;

            default: //Any other number
                puts("Invalid option. Please try again.");
        }
    } while (choice != 4); //Keep looping until user exits

    return 0;
}
