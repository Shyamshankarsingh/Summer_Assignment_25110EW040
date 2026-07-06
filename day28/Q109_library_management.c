#include <stdio.h>
#include <string.h>

#define MAX 100

struct Book { int id; char title[100]; char author[50]; int available; };

int main() {
    struct Book books[MAX];
    int n = 0, choice;
    do {
        printf("\n1.Add Book 2.Display 3.Issue 4.Return 5.Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("ID: "); scanf("%d", &books[n].id);
                printf("Title: "); scanf(" %[^\n]", books[n].title);
                printf("Author: "); scanf(" %[^\n]", books[n].author);
                books[n].available = 1; n++; printf("Book added!\n"); break;
            case 2:
                printf("%-5s %-30s %-20s %-10s\n", "ID", "Title", "Author", "Status");
                for (int i = 0; i < n; i++)
                    printf("%-5d %-30s %-20s %-10s\n", books[i].id, books[i].title, books[i].author, books[i].available ? "Available" : "Issued");
                break;
            case 3: case 4: {
                int id; printf("Book ID: "); scanf("%d", &id);
                for (int i = 0; i < n; i++)
                    if (books[i].id == id) { books[i].available = (choice == 4); printf(choice == 3 ? "Issued\n" : "Returned\n"); break; }
                break; }
            case 5: printf("Exiting\n"); break;
        }
    } while (choice != 5);
    return 0;
}
