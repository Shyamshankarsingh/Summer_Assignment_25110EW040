#include <stdio.h>

int main() {
    char str[1000], res[1000];
    int seen[256] = {0};
    int j = 0;
    printf("Enter string: ");
    scanf("%s", str);
    for (int i = 0; str[i]; i++)
        if (!seen[(unsigned char)str[i]]) { res[j++] = str[i]; seen[(unsigned char)str[i]] = 1; }
    res[j] = '\0';
    printf("Without duplicates: %s\n", res);
    return 0;
}
