/*Q32: Write a program to check if a number is a palindrome.
*/
#include <stdio.h>
int main() {
    int n, original, rev = 0;
    scanf("%d", &n);
    original = n;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    if (rev == original)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");
    return 0;
}
