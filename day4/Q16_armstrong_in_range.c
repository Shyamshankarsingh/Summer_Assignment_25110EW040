#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int temp = n, digits = 0, sum = 0;
    while (temp) { digits++; temp /= 10; }
    temp = n;
    while (temp) { sum += (int)pow(temp % 10, digits); temp /= 10; }
    return sum == n;
}

int main() {
    int a, b;
    printf("Enter range (a b): ");
    scanf("%d %d", &a, &b);
    printf("Armstrong numbers: ");
    for (int i = a; i <= b; i++)
        if (isArmstrong(i)) printf("%d ", i);
    printf("\n");
    return 0;
}
