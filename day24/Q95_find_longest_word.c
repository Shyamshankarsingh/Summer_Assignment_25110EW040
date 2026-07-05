#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], word[100], longest[100] = "";
    printf("Enter sentence: ");
    fgets(str, sizeof(str), stdin);
    int i = 0, j = 0;
    str[strcspn(str, "\n")] = 0;
    strcat(str, " ");
    for (int k = 0; str[k]; k++) {
        if (str[k] != ' ') word[j++] = str[k];
        else {
            word[j] = '\0';
            if (strlen(word) > strlen(longest)) strcpy(longest, word);
            j = 0;
        }
    }
    printf("Longest word: %s\n", longest);
    return 0;
}
