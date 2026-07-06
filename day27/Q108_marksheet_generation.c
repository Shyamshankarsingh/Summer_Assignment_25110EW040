#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char name[50];
        int marks[5];
        float total = 0;
        printf("\nStudent %d Name: ", i + 1);
        scanf("%s", name);
        printf("Enter marks for 5 subjects: ");
        for (int j = 0; j < 5; j++) { scanf("%d", &marks[j]); total += marks[j]; }
        float avg = total / 5;
        char *grade = avg >= 90 ? "A+" : avg >= 80 ? "A" : avg >= 70 ? "B" : avg >= 60 ? "C" : avg >= 50 ? "D" : "F";
        char *result = avg >= 50 ? "PASS" : "FAIL";
        printf("\n--- Marksheet ---\nName: %s\nTotal: %.0f/500\nAvg: %.2f\nGrade: %s\nResult: %s\n", name, total, avg, grade, result);
    }
    return 0;
}
