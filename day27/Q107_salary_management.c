#include <stdio.h>

#define MAX 100

struct Employee { int id; char name[50]; float basic, hra, da, gross, net, tax; };

int main() {
    struct Employee emp[MAX];
    int n, choice;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("ID: "); scanf("%d", &emp[i].id);
        printf("Name: "); scanf("%s", emp[i].name);
        printf("Basic Salary: "); scanf("%f", &emp[i].basic);
        emp[i].hra = 0.2 * emp[i].basic;
        emp[i].da = 0.5 * emp[i].basic;
        emp[i].gross = emp[i].basic + emp[i].hra + emp[i].da;
        emp[i].tax = emp[i].gross > 50000 ? 0.1 * emp[i].gross : 0;
        emp[i].net = emp[i].gross - emp[i].tax;
    }
    printf("\n%-5s %-15s %-10s %-10s %-10s %-10s %-10s\n", "ID", "Name", "Basic", "HRA", "DA", "Gross", "Net");
    for (int i = 0; i < n; i++)
        printf("%-5d %-15s %-10.2f %-10.2f %-10.2f %-10.2f %-10.2f\n",
               emp[i].id, emp[i].name, emp[i].basic, emp[i].hra, emp[i].da, emp[i].gross, emp[i].net);
    return 0;
}
