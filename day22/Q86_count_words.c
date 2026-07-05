#include <stdio.h>

int main() {
    char str[1000];
    int count = 0, inWord = 0;
    printf("Enter sentence: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i]; i++) {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') {
            if (!inWord) { count++; inWord = 1; }
        } else inWord = 0;
    }
    printf("Word count = %d\n", count);
    return 0;
}
