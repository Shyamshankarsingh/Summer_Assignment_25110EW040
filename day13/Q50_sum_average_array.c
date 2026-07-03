#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    long long sum = 0;
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) { scanf("%d", &arr[i]); sum += arr[i]; }
    printf("Sum = %lld, Average = %.2f\n", sum, (double)sum / n);
    return 0;
}
