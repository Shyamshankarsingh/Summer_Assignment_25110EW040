#include <stdio.h>

int main() {
    float a, b;
    int choice;
    do {
        printf("\n=== Calculator ===\n1.Add 2.Subtract 3.Multiply 4.Divide 5.Modulus 6.Exit\nChoice: ");
        scanf("%d", &choice);
        if (choice >= 1 && choice <= 5) { printf("Enter two numbers: "); scanf("%f %f", &a, &b); }
        switch (choice) {
            case 1: printf("Result: %.2f\n", a + b); break;
            case 2: printf("Result: %.2f\n", a - b); break;
            case 3: printf("Result: %.2f\n", a * b); break;
            case 4: b == 0 ? printf("Division by zero!\n") : printf("Result: %.2f\n", a / b); break;
            case 5: printf("Result: %d\n", (int)a % (int)b); break;
            case 6: printf("Exiting\n"); break;
            default: printf("Invalid choice\n");
        }
    } while (choice != 6);
    return 0;
}
