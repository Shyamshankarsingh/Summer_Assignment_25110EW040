#include <stdio.h>

int main() {
    int n;
    long long product = 1;
    printf("Enter number: ");
    scanf("%d", &n);
    if (n < 0) n = -n;
    while (n != 0) { product *= n % 10; n /= 10; }
    printf("Product of digits = %lld\n", product);
    return 0;
}
