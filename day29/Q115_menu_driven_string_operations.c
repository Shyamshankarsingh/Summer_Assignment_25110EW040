#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    int choice;
    printf("Enter string: ");
    scanf("%s", str);
    do {
        printf("\n1.Length 2.Reverse 3.Uppercase 4.Lowercase 5.Palindrome 6.Count Vowels 7.Exit\nChoice: ");
        scanf("%d", &choice);
        char temp[1000];
        strcpy(temp, str);
        int len = strlen(str);
        switch (choice) {
            case 1: printf("Length: %d\n", len); break;
            case 2:
                for (int i = 0, j = len - 1; i < j; i++, j--) { char c = temp[i]; temp[i] = temp[j]; temp[j] = c; }
                printf("Reversed: %s\n", temp); break;
            case 3: for (int i = 0; temp[i]; i++) temp[i] = toupper(temp[i]); printf("Upper: %s\n", temp); break;
            case 4: for (int i = 0; temp[i]; i++) temp[i] = tolower(temp[i]); printf("Lower: %s\n", temp); break;
            case 5: {
                int isPalin = 1;
                for (int i = 0, j = len - 1; i < j; i++, j--) if (str[i] != str[j]) { isPalin = 0; break; }
                printf("%s\n", isPalin ? "Is palindrome" : "Not palindrome"); break; }
            case 6: { int v = 0; for (int i = 0; str[i]; i++) { char c = tolower(str[i]); if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u') v++; } printf("Vowels: %d\n", v); break; }
            case 7: printf("Exiting\n"); break;
        }
    } while (choice != 7);
    return 0;
}
