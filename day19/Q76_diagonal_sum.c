#include <stdio.h>

int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int a[n][n];
    printf("Enter matrix:\n");
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) scanf("%d", &a[i][j]);
    int sum = 0;
    for (int i = 0; i < n; i++) sum += a[i][i];
    printf("Diagonal sum = %d\n", sum);
    return 0;
}
