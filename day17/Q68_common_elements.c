#include <stdio.h>

int main() {
    int m, n, p;
    printf("Enter sizes of 3 arrays: ");
    scanf("%d %d %d", &m, &n, &p);
    int a[m], b[n], c[p];
    printf("First array: ");
    for (int i = 0; i < m; i++) scanf("%d", &a[i]);
    printf("Second array: ");
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);
    printf("Third array: ");
    for (int i = 0; i < p; i++) scanf("%d", &c[i]);
    printf("Common elements: ");
    for (int i = 0; i < m; i++) {
        int inB = 0, inC = 0;
        for (int j = 0; j < n; j++) if (a[i] == b[j]) { inB = 1; break; }
        for (int j = 0; j < p; j++) if (a[i] == c[j]) { inC = 1; break; }
        if (inB && inC) printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
