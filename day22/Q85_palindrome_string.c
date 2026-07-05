#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    printf("Enter string: ");
    scanf("%s", str);
    int len = strlen(str), isPalin = 1;
    for (int i = 0, j = len - 1; i < j; i++, j--)
        if (str[i] != str[j]) { isPalin = 0; break; }
    printf("%s is %sa palindrome\n", str, isPalin ? "" : "not ");
    return 0;
}
