#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    long long a = 0, b = 1;
    if (n == 1) { printf("F(%d) = 0\n", n); return 0; }
    for (int i = 2; i < n; i++) { long long c = a + b; a = b; b = c; }
    printf("F(%d) = %lld\n", n, b);
    return 0;
}
