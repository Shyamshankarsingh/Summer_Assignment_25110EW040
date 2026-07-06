#include <stdio.h>
#include <string.h>

#define MAX 100

struct Contact { char name[50]; char phone[15]; char email[50]; };

int main() {
    struct Contact contacts[MAX];
    int n = 0, choice;
    do {
        printf("\n1.Add 2.Display 3.Search 4.Delete 5.Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Name: "); scanf("%s", contacts[n].name);
                printf("Phone: "); scanf("%s", contacts[n].phone);
                printf("Email: "); scanf("%s", contacts[n].email);
                n++; printf("Contact added!\n"); break;
            case 2:
                for (int i = 0; i < n; i++)
                    printf("%d. %s | %s | %s\n", i+1, contacts[i].name, contacts[i].phone, contacts[i].email);
                break;
            case 3: {
                char key[50]; printf("Search name: "); scanf("%s", key);
                for (int i = 0; i < n; i++)
                    if (strcmp(contacts[i].name, key) == 0)
                        printf("Found: %s | %s | %s\n", contacts[i].name, contacts[i].phone, contacts[i].email);
                break; }
            case 4: {
                char key[50]; printf("Delete name: "); scanf("%s", key);
                for (int i = 0; i < n; i++)
                    if (strcmp(contacts[i].name, key) == 0) {
                        for (int j = i; j < n - 1; j++) contacts[j] = contacts[j + 1];
                        n--; printf("Deleted!\n"); break;
                    }
                break; }
            case 5: printf("Exiting\n"); break;
        }
    } while (choice != 5);
    return 0;
}
