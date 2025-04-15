#include <stdio.h>

int main() {
    double balance = 150.75;
    char choice;
    double amount;

    printf("Current wallet balance: $%.2f\n", balance);
    printf("Would you like to add (A) or spend (S) funds? ");
    scanf(" %c", &choice);

    if (choice == 'A' || choice == 'a') {
        printf("Enter the amount to add: $");
        scanf("%lf", &amount);
        balance += amount;
        printf("Updated wallet balance: $%.2f\n", balance);
    } else if (choice == 'S' || choice == 's') {
        printf("Enter the amount to spend: $");
        scanf("%lf", &amount);
        if (amount > balance) {
            printf("Insufficient funds! Please reconsider your spending amount.\n");
        } else {
            balance -= amount;
            printf("Updated wallet balance: $%.2f\n", balance);
        }
    } else {
        printf("Invalid choice. Please enter 'A' or 'S'.\n");
    }

    return 0;
}