#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter rotations: ");
    scanf("%d", &k);
    k %= n;
    int temp[k];
    for (int i = 0; i < k; i++) temp[i] = arr[i];
    for (int i = 0; i < n - k; i++) arr[i] = arr[i + k];
    for (int i = 0; i < k; i++) arr[n - k + i] = temp[i];
    printf("Left rotated: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
