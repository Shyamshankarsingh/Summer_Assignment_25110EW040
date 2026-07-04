#include <stdio.h>

int main() {
    int m, n;
    printf("Enter sizes of arrays: ");
    scanf("%d %d", &m, &n);
    int a[m], b[n], c[m + n];
    printf("Enter %d elements for first array: ", m);
    for (int i = 0; i < m; i++) scanf("%d", &a[i]);
    printf("Enter %d elements for second array: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);
    for (int i = 0; i < m; i++) c[i] = a[i];
    for (int i = 0; i < n; i++) c[m + i] = b[i];
    printf("Merged array: ");
    for (int i = 0; i < m + n; i++) printf("%d ", c[i]);
    printf("\n");
    return 0;
}
