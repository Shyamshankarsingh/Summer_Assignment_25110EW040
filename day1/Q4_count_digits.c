#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    if (n == 0) { printf("Digits: 1\n"); return 0; }
    if (n < 0) n = -n;
    while (n != 0) { n /= 10; count++; }
    printf("Number of digits = %d\n", count);
    return 0;
}
