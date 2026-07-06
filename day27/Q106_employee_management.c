#include <stdio.h>
#include <string.h>

#define MAX 100

struct Employee { int id; char name[50]; char dept[50]; float salary; };

int main() {
    struct Employee emp[MAX];
    int n = 0, choice;
    do {
        printf("\n1.Add 2.Display 3.Search 4.Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("ID: "); scanf("%d", &emp[n].id);
                printf("Name: "); scanf("%s", emp[n].name);
                printf("Dept: "); scanf("%s", emp[n].dept);
                printf("Salary: "); scanf("%f", &emp[n].salary);
                n++; printf("Employee added!\n"); break;
            case 2:
                for (int i = 0; i < n; i++)
                    printf("ID:%d %s Dept:%s Salary:%.2f\n", emp[i].id, emp[i].name, emp[i].dept, emp[i].salary);
                break;
            case 3: {
                int id; printf("Search ID: "); scanf("%d", &id);
                for (int i = 0; i < n; i++)
                    if (emp[i].id == id) { printf("Found: %s, %s, %.2f\n", emp[i].name, emp[i].dept, emp[i].salary); break; }
                break; }
            case 4: printf("Exiting\n"); break;
        }
    } while (choice != 4);
    return 0;
}
