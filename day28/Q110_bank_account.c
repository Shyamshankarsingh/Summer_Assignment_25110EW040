#include <stdio.h>

int main() {
    char name[50];
    int accNo;
    float balance = 0;
    int choice;
    float amount;
    printf("Enter name: "); scanf("%s", name);
    printf("Enter account number: "); scanf("%d", &accNo);
    printf("Initial deposit: "); scanf("%f", &balance);
    do {
        printf("\n=== Bank Account [%s | Acc:%d] ===\n1.Deposit 2.Withdraw 3.Balance 4.Exit\nChoice: ", name, accNo);
        scanf("%d", &choice);
        switch (choice) {
            case 1: printf("Amount: "); scanf("%f", &amount); balance += amount; printf("Deposited. Balance: %.2f\n", balance); break;
            case 2:
                printf("Amount: "); scanf("%f", &amount);
                if (amount > balance) printf("Insufficient balance\n");
                else { balance -= amount; printf("Withdrawn. Balance: %.2f\n", balance); }
                break;
            case 3: printf("Current Balance: %.2f\n", balance); break;
            case 4: printf("Thank you %s!\n", name); break;
        }
    } while (choice != 4);
    return 0;
}
