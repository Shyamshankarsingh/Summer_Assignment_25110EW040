#include <stdio.h>

int main() {
    float balance = 10000.0;
    int choice;
    float amount;
    printf("=== ATM Simulation ===\n");
    do {
        printf("\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: printf("Balance: Rs. %.2f\n", balance); break;
            case 2:
                printf("Deposit amount: ");
                scanf("%f", &amount);
                if (amount > 0) { balance += amount; printf("Deposited. New balance: %.2f\n", balance); }
                break;
            case 3:
                printf("Withdraw amount: ");
                scanf("%f", &amount);
                if (amount > balance) printf("Insufficient funds\n");
                else { balance -= amount; printf("Withdrawn. New balance: %.2f\n", balance); }
                break;
            case 4: printf("Thank you!\n"); break;
            default: printf("Invalid choice\n");
        }
    } while (choice != 4);
    return 0;
}
