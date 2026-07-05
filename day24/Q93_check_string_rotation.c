#include <stdio.h>
#include <string.h>

int main() {
    char s1[500], s2[500], temp[1000];
    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);
    if (strlen(s1) != strlen(s2)) { printf("Not a rotation\n"); return 0; }
    strcpy(temp, s1);
    strcat(temp, s1);
    printf(strstr(temp, s2) ? "Is a rotation\n" : "Not a rotation\n");
    return 0;
}
