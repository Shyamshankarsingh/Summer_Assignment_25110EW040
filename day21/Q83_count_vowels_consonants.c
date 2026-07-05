#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int vowels = 0, consonants = 0;
    printf("Enter string: ");
    scanf("%s", str);
    for (int i = 0; str[i]; i++) {
        char c = tolower(str[i]);
        if (isalpha(c)) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') vowels++;
            else consonants++;
        }
    }
    printf("Vowels = %d, Consonants = %d\n", vowels, consonants);
    return 0;
}
