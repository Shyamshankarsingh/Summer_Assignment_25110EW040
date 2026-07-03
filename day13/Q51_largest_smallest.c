#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int mx = arr[0], mn = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > mx) mx = arr[i];
        if (arr[i] < mn) mn = arr[i];
    }
    printf("Largest = %d, Smallest = %d\n", mx, mn);
    return 0;
}
