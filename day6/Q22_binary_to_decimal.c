#include <stdio.h>

int main() {
    long long bin;
    int dec = 0, base = 1;
    printf("Enter binary number: ");
    scanf("%lld", &bin);
    long long temp = bin;
    while (temp) { dec += (temp % 10) * base; base *= 2; temp /= 10; }
    printf("Decimal: %d\n", dec);
    return 0;
}
