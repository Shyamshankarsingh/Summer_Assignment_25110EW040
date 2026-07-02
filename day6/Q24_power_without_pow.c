#include <stdio.h>

int main() {
    long long base, result = 1;
    int exp;
    printf("Enter base and exponent: ");
    scanf("%lld %d", &base, &exp);
    for (int i = 0; i < exp; i++) result *= base;
    printf("%lld^%d = %lld\n", base, exp, result);
    return 0;
}
