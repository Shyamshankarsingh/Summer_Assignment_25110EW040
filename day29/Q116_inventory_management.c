#include <stdio.h>
#include <string.h>

#define MAX 100

struct Item { int id; char name[50]; int qty; float price; };

int main() {
    struct Item items[MAX];
    int n = 0, choice;
    do {
        printf("\n1.Add 2.Display 3.Update 4.Delete 5.Search 6.Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("ID: "); scanf("%d", &items[n].id);
                printf("Name: "); scanf("%s", items[n].name);
                printf("Qty: "); scanf("%d", &items[n].qty);
                printf("Price: "); scanf("%f", &items[n].price);
                n++; printf("Item added!\n"); break;
            case 2:
                printf("%-5s %-20s %-8s %-10s\n", "ID", "Name", "Qty", "Price");
                for (int i = 0; i < n; i++)
                    printf("%-5d %-20s %-8d %-10.2f\n", items[i].id, items[i].name, items[i].qty, items[i].price);
                break;
            case 3: {
                int id; printf("Update ID: "); scanf("%d", &id);
                for (int i = 0; i < n; i++) if (items[i].id == id) {
                    printf("New Qty: "); scanf("%d", &items[i].qty);
                    printf("New Price: "); scanf("%f", &items[i].price);
                    printf("Updated!\n"); break;
                } break; }
            case 4: {
                int id; printf("Delete ID: "); scanf("%d", &id);
                for (int i = 0; i < n; i++) if (items[i].id == id) {
                    for (int j = i; j < n - 1; j++) items[j] = items[j + 1];
                    n--; printf("Deleted!\n"); break;
                } break; }
            case 5: {
                char key[50]; printf("Search name: "); scanf("%s", key);
                for (int i = 0; i < n; i++) if (strcmp(items[i].name, key) == 0)
                    printf("Found: ID:%d Qty:%d Price:%.2f\n", items[i].id, items[i].qty, items[i].price);
                break; }
            case 6: printf("Exiting\n"); break;
        }
    } while (choice != 6);
    return 0;
}
