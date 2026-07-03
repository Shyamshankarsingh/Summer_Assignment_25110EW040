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
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("%d is %san Armstrong number\n", n, isArmstrong(n) ? "" : "not ");
    return 0;
}
