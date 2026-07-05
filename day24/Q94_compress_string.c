#include <stdio.h>

int main() {
    char str[1000];
    printf("Enter string: ");
    scanf("%s", str);
    printf("Compressed: ");
    for (int i = 0; str[i]; ) {
        int count = 1;
        while (str[i] == str[i + count]) count++;
        if (count > 1) printf("%c%d", str[i], count);
        else printf("%c", str[i]);
        i += count;
    }
    printf("\n");
    return 0;
}
