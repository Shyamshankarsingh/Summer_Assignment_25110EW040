#include <stdio.h>

int main() {
    int age;
    char name[100];
    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("%s is %seligible to vote\n", name, age >= 18 ? "" : "not ");
    return 0;
}
