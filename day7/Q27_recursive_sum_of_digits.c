#include <stdio.h>

int sumDigits(int n) { return (n == 0) ? 0 : n % 10 + sumDigits(n / 10); }

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Sum of digits = %d\n", sumDigits(n < 0 ? -n : n));
    return 0;
}
