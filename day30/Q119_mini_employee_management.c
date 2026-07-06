#include <stdio.h>
#include <string.h>

#define MAX 100

struct Employee { int id; char name[50]; char dept[30]; float basic, gross, net; };

int main() {
    struct Employee emp[MAX];
    int n = 0, choice;
    do {
        printf("\n=== Employee Management ===\n1.Add 2.Display 3.Search 4.Update Salary 5.Delete 6.Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("ID: "); scanf("%d", &emp[n].id);
                printf("Name: "); scanf("%s", emp[n].name);
                printf("Dept: "); scanf("%s", emp[n].dept);
                printf("Basic: "); scanf("%f", &emp[n].basic);
                emp[n].gross = emp[n].basic * 1.7;
                emp[n].net = emp[n].gross * 0.9;
                n++; printf("Added!\n"); break;
            case 2:
                printf("%-5s %-15s %-15s %-10s %-10s %-10s\n", "ID", "Name", "Dept", "Basic", "Gross", "Net");
                for (int i = 0; i < n; i++)
                    printf("%-5d %-15s %-15s %-10.2f %-10.2f %-10.2f\n", emp[i].id, emp[i].name, emp[i].dept, emp[i].basic, emp[i].gross, emp[i].net);
                break;
            case 3: {
                int id; printf("Search ID: "); scanf("%d", &id);
                for (int i = 0; i < n; i++) if (emp[i].id == id)
                    printf("%s | %s | Basic:%.2f | Net:%.2f\n", emp[i].name, emp[i].dept, emp[i].basic, emp[i].net);
                break; }
            case 4: {
                int id; printf("Employee ID: "); scanf("%d", &id);
                for (int i = 0; i < n; i++) if (emp[i].id == id) {
                    printf("New Basic: "); scanf("%f", &emp[i].basic);
                    emp[i].gross = emp[i].basic * 1.7; emp[i].net = emp[i].gross * 0.9;
                    printf("Updated!\n"); break;
                } break; }
            case 5: {
                int id; printf("Delete ID: "); scanf("%d", &id);
                for (int i = 0; i < n; i++) if (emp[i].id == id) {
                    for (int j = i; j < n - 1; j++) emp[j] = emp[j + 1];
                    n--; printf("Deleted!\n"); break;
                } break; }
            case 6: printf("Exiting\n"); break;
        }
    } while (choice != 6);
    return 0;
}
