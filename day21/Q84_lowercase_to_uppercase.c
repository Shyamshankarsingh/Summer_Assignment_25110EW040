#include <stdio.h>

int main() {
    char str[1000];
    printf("Enter string: ");
    scanf("%s", str);
    for (int i = 0; str[i]; i++)
        if (str[i] >= 'a' && str[i] <= 'z') str[i] -= 32;
    printf("Uppercase: %s\n", str);
    return 0;
}
