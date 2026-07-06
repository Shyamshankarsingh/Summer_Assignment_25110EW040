#include <stdio.h>
#include <string.h>

#define MAX 50

struct Book { int id; char title[100]; char author[50]; int qty; };

int main() {
    struct Book books[MAX];
    int n = 0, choice;
    do {
        printf("\n=== Mini Library ===\n1.Add 2.Display 3.Issue 4.Return 5.Search 6.Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("ID: "); scanf("%d", &books[n].id);
                printf("Title: "); scanf(" %[^\n]", books[n].title);
                printf("Author: "); scanf(" %[^\n]", books[n].author);
                printf("Quantity: "); scanf("%d", &books[n].qty);
                n++; printf("Book added!\n"); break;
            case 2:
                printf("%-5s %-30s %-20s %-5s\n", "ID", "Title", "Author", "Qty");
                for (int i = 0; i < n; i++)
                    printf("%-5d %-30s %-20s %-5d\n", books[i].id, books[i].title, books[i].author, books[i].qty);
                break;
            case 3: case 4: {
                int id; printf("Book ID: "); scanf("%d", &id);
                for (int i = 0; i < n; i++) if (books[i].id == id) {
                    if (choice == 3) { if (books[i].qty > 0) { books[i].qty--; printf("Issued!\n"); } else printf("Not available\n"); }
                    else { books[i].qty++; printf("Returned!\n"); }
                    break;
                } break; }
            case 5: {
                char key[100]; printf("Search title: "); scanf(" %[^\n]", key);
                for (int i = 0; i < n; i++) if (strstr(books[i].title, key))
                    printf("Found: %s by %s (Qty:%d)\n", books[i].title, books[i].author, books[i].qty);
                break; }
            case 6: printf("Goodbye!\n"); break;
        }
    } while (choice != 6);
    return 0;
}
