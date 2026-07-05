#include <stdio.h>

int main() {
    char s1[500], s2[500];
    int f1[256] = {0}, f2[256] = {0};
    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);
    for (int i = 0; s1[i]; i++) f1[(unsigned char)s1[i]] = 1;
    for (int i = 0; s2[i]; i++) f2[(unsigned char)s2[i]] = 1;
    printf("Common characters: ");
    for (int i = 0; i < 256; i++)
        if (f1[i] && f2[i]) printf("%c ", i);
    printf("\n");
    return 0;
}
