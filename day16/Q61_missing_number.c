#include <stdio.h>

int main() {
    int n;
    printf("Enter size (n-1 elements from 1 to n): ");
    scanf("%d", &n);
    int arr[n - 1];
    printf("Enter %d elements: ", n - 1);
    long long sum = 0;
    for (int i = 0; i < n - 1; i++) { scanf("%d", &arr[i]); sum += arr[i]; }
    long long expected = (long long)n * (n + 1) / 2;
    printf("Missing number = %lld\n", expected - sum);
    return 0;
}
