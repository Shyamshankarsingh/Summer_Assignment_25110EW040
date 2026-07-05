#include <stdio.h>

int main() {
    char str[1000];
    printf("Enter string: ");
    scanf("%s", str);
    int len = 0;
    while (str[len] != '\0') len++;
    printf("Length = %d\n", len);
    return 0;
}
