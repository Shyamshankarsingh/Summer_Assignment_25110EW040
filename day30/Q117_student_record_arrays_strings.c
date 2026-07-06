#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    int ids[MAX], n = 0, choice;
    char names[MAX][50];
    float marks[MAX][5], total[MAX], avg[MAX];
    char grade[MAX][3];

    do {
        printf("\n1.Add Student 2.Display All 3.Search 4.Topper 5.Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("ID: "); scanf("%d", &ids[n]);
                printf("Name: "); scanf("%s", names[n]);
                total[n] = 0;
                printf("Enter 5 subject marks: ");
                for (int j = 0; j < 5; j++) { scanf("%f", &marks[n][j]); total[n] += marks[n][j]; }
                avg[n] = total[n] / 5;
                strcpy(grade[n], avg[n] >= 90 ? "A+" : avg[n] >= 80 ? "A" : avg[n] >= 70 ? "B" : avg[n] >= 60 ? "C" : "F");
                n++; printf("Added!\n"); break;
            case 2:
                printf("%-5s %-15s %-8s %-8s %-5s\n", "ID", "Name", "Total", "Avg", "Grade");
                for (int i = 0; i < n; i++)
                    printf("%-5d %-15s %-8.1f %-8.2f %-5s\n", ids[i], names[i], total[i], avg[i], grade[i]);
                break;
            case 3: {
                char key[50]; printf("Search name: "); scanf("%s", key);
                for (int i = 0; i < n; i++) if (strcmp(names[i], key) == 0)
                    printf("Found: ID:%d Avg:%.2f Grade:%s\n", ids[i], avg[i], grade[i]);
                break; }
            case 4: {
                int topIdx = 0;
                for (int i = 1; i < n; i++) if (avg[i] > avg[topIdx]) topIdx = i;
                printf("Topper: %s with avg %.2f\n", names[topIdx], avg[topIdx]);
                break; }
            case 5: printf("Exiting\n"); break;
        }
    } while (choice != 5);
    return 0;
}
