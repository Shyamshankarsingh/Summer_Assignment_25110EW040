#include <stdio.h>

int main() {
    char str[1000], res[1000];
    int j = 0;
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i]; i++)
        if (str[i] != ' ') res[j++] = str[i];
    res[j] = '\0';
    printf("Without spaces: %s\n", res);
    return 0;
}
