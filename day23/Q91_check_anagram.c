#include <stdio.h>

int main() {
    char s1[1000], s2[1000];
    int freq[256] = {0};
    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);
    for (int i = 0; s1[i]; i++) freq[(unsigned char)s1[i]]++;
    for (int i = 0; s2[i]; i++) freq[(unsigned char)s2[i]]--;
    for (int i = 0; i < 256; i++)
        if (freq[i] != 0) { printf("Not anagrams\n"); return 0; }
    printf("Strings are anagrams\n");
    return 0;
}
