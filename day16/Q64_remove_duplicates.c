#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n], res[n], rSize = 0;
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = 0; j < rSize; j++) if (res[j] == arr[i]) { found = 1; break; }
        if (!found) res[rSize++] = arr[i];
    }
    printf("After removing duplicates: ");
    for (int i = 0; i < rSize; i++) printf("%d ", res[i]);
    printf("\n");
    return 0;
}
