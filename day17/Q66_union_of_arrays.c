#include <stdio.h>

int main() {
    int m, n;
    printf("Enter sizes: ");
    scanf("%d %d", &m, &n);
    int a[m], b[n], res[m + n], rSize = 0;
    printf("Enter first array: ");
    for (int i = 0; i < m; i++) scanf("%d", &a[i]);
    printf("Enter second array: ");
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);
    for (int i = 0; i < m; i++) {
        int found = 0;
        for (int j = 0; j < rSize; j++) if (res[j] == a[i]) { found = 1; break; }
        if (!found) res[rSize++] = a[i];
    }
    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = 0; j < rSize; j++) if (res[j] == b[i]) { found = 1; break; }
        if (!found) res[rSize++] = b[i];
    }
    printf("Union: ");
    for (int i = 0; i < rSize; i++) printf("%d ", res[i]);
    printf("\n");
    return 0;
}
