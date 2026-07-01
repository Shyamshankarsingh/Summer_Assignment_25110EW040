#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= (int)sqrt(n); i++)
        if (n % i == 0) return 0;
    return 1;
}

int main() {
    int a, b;
    printf("Enter range (a b): ");
    scanf("%d %d", &a, &b);
    printf("Primes between %d and %d: ", a, b);
    for (int i = a; i <= b; i++)
        if (isPrime(i)) printf("%d ", i);
    printf("\n");
    return 0;
}
