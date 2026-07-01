#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if (n < 2) { printf("%d is not prime\n", n); return 0; }
    for (int i = 2; i <= (int)sqrt(n); i++)
        if (n % i == 0) { printf("%d is not prime\n", n); return 0; }
    printf("%d is prime\n", n);
    return 0;
}
