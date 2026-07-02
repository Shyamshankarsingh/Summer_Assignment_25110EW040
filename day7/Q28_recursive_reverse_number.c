#include <stdio.h>

int rev = 0, base = 1;

void reverse(int n) {
    if (n == 0) return;
    reverse(n / 10);
    rev += (n % 10) * base;
    base *= 10;
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    reverse(n < 0 ? -n : n);
    printf("Reversed = %d\n", n < 0 ? -rev : rev);
    return 0;
}
