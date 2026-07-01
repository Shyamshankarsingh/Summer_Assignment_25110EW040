#include <stdio.h>

int main() {
    int n, sum = 0, temp;
    printf("Enter number: ");
    scanf("%d", &n);
    temp = n;
    while (temp) {
        int d = temp % 10, fact = 1;
        for (int i = 1; i <= d; i++) fact *= i;
        sum += fact;
        temp /= 10;
    }
    printf("%d is %sa strong number\n", n, (sum == n) ? "" : "not ");
    return 0;
}
