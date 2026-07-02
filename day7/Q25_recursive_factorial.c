#include <stdio.h>

long long factorial(int n) { return (n <= 1) ? 1 : n * factorial(n - 1); }

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Factorial(%d) = %lld\n", n, factorial(n));
    return 0;
}
