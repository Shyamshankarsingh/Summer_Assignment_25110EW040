#include <stdio.h>

int isPalindrome(int n) {
    int rev = 0, temp = n < 0 ? -n : n, orig = temp;
    while (temp) { rev = rev * 10 + temp % 10; temp /= 10; }
    return orig == rev;
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("%d is %sa palindrome\n", n, isPalindrome(n) ? "" : "not ");
    return 0;
}
