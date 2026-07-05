#include <stdio.h>

int main() {
    char str[1000];
    int freq[256] = {0};
    printf("Enter string: ");
    scanf("%s", str);
    for (int i = 0; str[i]; i++) freq[(unsigned char)str[i]]++;
    for (int i = 0; str[i]; i++)
        if (freq[(unsigned char)str[i]] > 1) { printf("First repeating: %c\n", str[i]); return 0; }
    printf("No repeating character\n");
    return 0;
}
