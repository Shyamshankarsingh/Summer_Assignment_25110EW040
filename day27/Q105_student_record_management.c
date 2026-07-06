#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student { int id; char name[50]; float marks; };

int main() {
    struct Student students[MAX];
    int n = 0, choice, id;
    do {
        printf("\n1.Add 2.Display 3.Search 4.Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("ID: "); scanf("%d", &students[n].id);
                printf("Name: "); scanf("%s", students[n].name);
                printf("Marks: "); scanf("%f", &students[n].marks);
                n++; printf("Added!\n"); break;
            case 2:
                for (int i = 0; i < n; i++)
                    printf("ID:%d Name:%s Marks:%.2f\n", students[i].id, students[i].name, students[i].marks);
                break;
            case 3:
                printf("Search ID: "); scanf("%d", &id);
                for (int i = 0; i < n; i++)
                    if (students[i].id == id) { printf("Found: %s, Marks:%.2f\n", students[i].name, students[i].marks); break; }
                break;
            case 4: printf("Exiting\n"); break;
            default: printf("Invalid\n");
        }
    } while (choice != 4);
    return 0;
}
