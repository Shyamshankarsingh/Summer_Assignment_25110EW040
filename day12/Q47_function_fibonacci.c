#include <stdio.h>

void printFibonacci(int n) {
    long long a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        printf("%lld ", a);
        long long c = a + b; a = b; b = c;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter terms: ");
    scanf("%d", &n);
    printFibonacci(n);
    return 0;
}
