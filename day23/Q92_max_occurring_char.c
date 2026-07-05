#include <stdio.h>

int main() {
    char str[1000];
    int freq[256] = {0};
    printf("Enter string: ");
    scanf("%s", str);
    for (int i = 0; str[i]; i++) freq[(unsigned char)str[i]]++;
    int maxFreq = 0; char maxChar = str[0];
    for (int i = 0; i < 256; i++)
        if (freq[i] > maxFreq) { maxFreq = freq[i]; maxChar = i; }
    printf("Most occurring char: '%c' (%d times)\n", maxChar, maxFreq);
    return 0;
}
