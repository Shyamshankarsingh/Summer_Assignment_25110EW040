#include <stdio.h>

long long fib(int n) { return (n <= 1) ? n : fib(n - 1) + fib(n - 2); }

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Fibonacci(%d) = %lld\n", n, fib(n));
    return 0;
}
