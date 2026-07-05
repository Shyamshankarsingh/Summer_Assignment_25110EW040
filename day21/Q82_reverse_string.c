#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    printf("Enter string: ");
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0, j = len - 1; i < j; i++, j--) { char t = str[i]; str[i] = str[j]; str[j] = t; }
    printf("Reversed: %s\n", str);
    return 0;
}
