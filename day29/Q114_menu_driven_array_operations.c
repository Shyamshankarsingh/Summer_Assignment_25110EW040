#include <stdio.h>

#define MAX 100
int arr[MAX], n = 0;

void display() { for (int i = 0; i < n; i++) printf("%d ", arr[i]); printf("\n"); }
void insertElement() { int x, pos; printf("Value and position: "); scanf("%d %d", &x, &pos); for (int i = n; i > pos; i--) arr[i] = arr[i-1]; arr[pos] = x; n++; }
void deleteElement() { int pos; printf("Position to delete: "); scanf("%d", &pos); for (int i = pos; i < n - 1; i++) arr[i] = arr[i+1]; n--; }
void sortArray() { for (int i = 0; i < n - 1; i++) for (int j = 0; j < n - i - 1; j++) if (arr[j] > arr[j+1]) { int t = arr[j]; arr[j] = arr[j+1]; arr[j+1] = t; } }

int main() {
    int choice;
    printf("Enter size: "); scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    do {
        printf("\n1.Display 2.Insert 3.Delete 4.Sort 5.Reverse 6.Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: display(); break;
            case 2: insertElement(); break;
            case 3: deleteElement(); break;
            case 4: sortArray(); printf("Sorted\n"); break;
            case 5: for (int i = 0, j = n-1; i < j; i++, j--) { int t = arr[i]; arr[i] = arr[j]; arr[j] = t; } printf("Reversed\n"); break;
            case 6: printf("Exiting\n"); break;
        }
    } while (choice != 6);
    return 0;
}
