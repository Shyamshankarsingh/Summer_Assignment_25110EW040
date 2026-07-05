#include <stdio.h>

int main() {
    int m, n;
    printf("Enter sizes: ");
    scanf("%d %d", &m, &n);
    int a[m], b[n], c[m + n];
    printf("Enter sorted array A: ");
    for (int i = 0; i < m; i++) scanf("%d", &a[i]);
    printf("Enter sorted array B: ");
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);
    int i = 0, j = 0, k = 0;
    while (i < m && j < n) c[k++] = (a[i] <= b[j]) ? a[i++] : b[j++];
    while (i < m) c[k++] = a[i++];
    while (j < n) c[k++] = b[j++];
    printf("Merged sorted: ");
    for (int x = 0; x < m + n; x++) printf("%d ", c[x]);
    printf("\n");
    return 0;
}
